#include <ossimGui/DataManager.h>
#include <ossimGui/ConnectableDisplayObject.h>
#include <ossimGui/ImageMdiSubWindow.h>
#include <ossim/base/ossimConnectableObject.h>
#include <ossim/base/ossimObjectFactoryRegistry.h>
#include <ossim/imaging/ossimImageHandler.h>
#include <ossim/imaging/ossimImageSourceFactoryRegistry.h>
#include <ossim/imaging/ossimImageChain.h>
#include <ossim/imaging/ossimImageCombiner.h>

#ifdef OSSIM_PLANET_ENABLED
#include <ossimGui/PlanetMdiSubWindow.h>
#endif

#include <iostream>

ossimGui::DataManager::Node::Node(ossimRefPtr<ossimObject> source, const ossimString& name, const ossimString& description)
:m_object(source.get())
{
   setId();
}

ossimObject* ossimGui::DataManager::Node::getObject()
{
   return m_object.get();
}

const ossimObject* ossimGui::DataManager::Node::getObject()const
{
   return m_object.get();
}

void ossimGui::DataManager::Node::setObject(ossimObject* obj)
{
   m_object = obj;
   setId();
}

bool ossimGui::DataManager::Node::supportsInputs()const
{
   bool result = false;
   const ossimConnectableObject* connectable = getObjectAsConnectable();
   if(connectable)
   {
      result = ((!connectable->getInputListIsFixedFlag())||
                (connectable->getInputListIsFixedFlag()&&connectable->getNumberOfInputs()>0));
   }
   
   return result;
}

ossimConnectableObject*  ossimGui::DataManager::Node::getObjectAsConnectable()
{
   return dynamic_cast<ossimConnectableObject*>(m_object.get());
}

const ossimConnectableObject* ossimGui::DataManager::Node::getObjectAsConnectable()const
{
   return dynamic_cast<const ossimConnectableObject*>(m_object.get());
}

bool ossimGui::DataManager::Node::saveState(ossimKeywordlist& kwl, const ossimString& prefix)const
{
   kwl.add(prefix,
           "name",
           m_name.toAscii().data(),
           true);
   kwl.add(prefix,
           "description",
           m_description.toAscii().data(),
           true);
   if(m_object.valid())
   {
      m_object->saveState(kwl, prefix);
   }
   
   return true;
}

bool ossimGui::DataManager::Node::loadState(const ossimKeywordlist& kwl, const ossimString& prefix)
{
   m_name        = kwl.find(prefix, "name");
   m_description = kwl.find(prefix, "description");
   
   m_object = ossimObjectFactoryRegistry::instance()->createObject(kwl, prefix.c_str());
   setId();
   return m_object.valid();
}

void ossimGui::DataManager::Node::setId()
{
   ossimConnectableObject* connectable = getObjectAsConnectable();
   if(connectable)
   {
      m_id = connectable->getId();
   }
}

ossimGui::DataManager::DataManager()
{
   m_mdiArea = 0;
   m_defaultReprojectionChainTemplate = "type:ossimImageChain\n"
   "object0.type:ossimBandSelector\n"
   "object5.type:ossimHistogramRemapper\n"
   "object10.type:ossimCacheTileSource\n"
   "object20.type:ossimImageRenderer\n"
   "object20.max_levels_to_compute:0\n"
   "object20.image_view_trans.type:ossimImageViewProjectionTransform\n"
   "object30.type:ossimCacheTileSource\n"
   "object40.type:ossimBrightnessContrastSource\n"
   "object50.type:ossimHsiRemapper\n";
   
   m_defaultAffineChainTemplate = "type:ossimImageChain\n"
   "object0.type:ossimBandSelector\n"
   "object5.type:ossimHistogramRemapper\n"
   "object10.type:ossimCacheTileSource\n"
   "object20.type:ossimImageRenderer\n"
   "object20.max_levels_to_compute:0\n"
   "object20.image_view_trans.type:ossimImageViewAffineTransform\n"
   "object30.type:ossimCacheTileSource\n"
   "object40.type:ossimBrightnessContrastSource\n"
   "object50.type:ossimHsiRemapper\n";
}

bool ossimGui::DataManager::remove(ossimRefPtr<Node> obj, bool notifyFlag)
{
   ossimRefPtr<Callback> callback;
   bool result = false;
   {
      OpenThreads::ScopedLock<OpenThreads::Mutex> lock(m_mutex);
      result = removeIndexMapping(obj.get());
      if(result)
      {
         NodeListType::iterator sourceIter = std::find(m_sourceList.begin(),
                                                       m_sourceList.end(),
                                                       obj.get());
         if(sourceIter != m_sourceList.end())
         {
            m_sourceList.erase(sourceIter);
         }
         NodeListType::iterator chainIter = std::find(m_chainList.begin(),
                                                      m_chainList.end(),
                                                      obj.get());
         if(chainIter != m_chainList.end())
         {
            m_chainList.erase(chainIter);
         }
         
         NodeListType::iterator displayIter = std::find(m_displayList.begin(),
                                                      m_displayList.end(),
                                                      obj.get());
         if(displayIter != m_displayList.end())
         {
            m_displayList.erase(displayIter);
         }
         callback = m_callback;
      }
   }      
   if(result)
   {
      //std::cout << "ossimGui::DataManager::remove(:REMOVING " << obj->getObject()->getClassName() << std::endl;
      if(obj->getObjectAsConnectable()) obj->getObjectAsConnectable()->disconnect();
      if(callback.valid()&&callback->enabled()&&notifyFlag)
      {
         callback->nodeRemoved(obj.get());
         obj = 0;
      }
   }
   
   
   return result;
}

bool ossimGui::DataManager::remove(NodeListType& nodes, bool notifyFlag)
{
   ossim_uint32 idx = 0;
   NodeListType nodesRemoved;
   bool result = true;
   for(idx = 0; idx < nodes.size();++idx)
   {
      if(remove(nodes[idx], false))
      {
         nodesRemoved.push_back(nodes[idx]);
      }
      else 
      {
         result = false;
      }

   }
   if(notifyFlag)
   {
      ossimRefPtr<Callback> callback;
      {
         OpenThreads::ScopedLock<OpenThreads::Mutex> lock(m_mutex);
         if(m_callback.valid()&&m_callback->enabled())
         {
            callback = m_callback;
         }
      }
      if(callback.valid())
      {
         callback->nodesRemoved(nodesRemoved);
         nodesRemoved.clear();
      }
   }
   
   return result;
}


bool ossimGui::DataManager::nodeExists(ossimObject* obj)const
{
   OpenThreads::ScopedLock<OpenThreads::Mutex> lock(m_mutex);
   return (m_nodeMap.find(obj)!=m_nodeMap.end());
}

ossimRefPtr<ossimGui::DataManager::Node>  ossimGui::DataManager::findNode(ossimObject* obj)
{
   OpenThreads::ScopedLock<OpenThreads::Mutex> lock(m_mutex);
   ossimRefPtr<ossimGui::DataManager::Node> result;
   
   NodeMapType::iterator iter = m_nodeMap.find(obj);
   
   if(iter != m_nodeMap.end())
   {
      result = iter->second;
   }
   
   return result;
}

ossimRefPtr<ossimGui::DataManager::Node> ossimGui::DataManager::addSource(ossimRefPtr<ossimObject> obj, bool notifyFlag)
{
   ossimRefPtr<Node> result;
   ossimRefPtr<Callback> callback;
   if(obj.valid()&&!nodeExists(obj.get()))
   {
      QString defaultName = "";
      QString defaultDescription = "";
      result = new Node(obj.get());
      ossimConnectableObject* connectable = dynamic_cast<ossimConnectableObject*> (obj.get());
      ossimImageHandler* handler = dynamic_cast<ossimImageHandler*> (obj.get());
      ossimImageChain* chain = dynamic_cast<ossimImageChain*> (obj.get());
      if(handler)
      {
         defaultName = " Entry " + ossimString::toString(handler->getCurrentEntry())+ ": " + ossimString(handler->getFilename());
      }
      else
      {
         defaultName = obj->getClassName().c_str();
      }
      
      result->setName(defaultName);
      {
         OpenThreads::ScopedLock<OpenThreads::Mutex> lock(m_mutex);
         if(handler)
         {
            m_sourceList.push_back(result.get());
         }
         else if(chain)
         {
            m_chainList.push_back(result.get());
         }
         else if(dynamic_cast<ConnectableDisplayObject*> (obj.get()))
         {
            m_displayList.push_back(result.get());
         }
         else
         {
            m_sourceList.push_back(result.get());
         }
         addIndexMapping(result.get());
         if(m_callback.valid()&&m_callback->enabled()&&notifyFlag)
         {
            callback = m_callback;
         }
      }
   }
   if(result.valid()&&callback.valid())
   {
      callback->nodeAdded(result.get());
   }      
   return result.get();
}

ossimRefPtr<ossimGui::DataManager::Node> ossimGui::DataManager::createDefaultImageChain(ossimRefPtr<Node> input, bool notifyFlag)
{
   ossimRefPtr<Node> result;
   ossimConnectableObject* connectableInput = input->getObjectAsConnectable();
   ossimRefPtr<Callback> callback;

   if(connectableInput)
   {
      ossimImageSource* source = dynamic_cast<ossimImageSource*> (input->getObjectAsConnectable());
      if(source)
      {
         ossimRefPtr<ossimImageGeometry> geom = source->getImageGeometry();
         if(geom.valid()&&geom->getProjection())
         {
            result = createChainFromTemplate(m_defaultReprojectionChainTemplate, input.get(), false);
            result->setName("Reprojection Chain:" + input->name());
         }
         else
         {
            result = createChainFromTemplate(m_defaultAffineChainTemplate, input.get(), false);
            result->setName("Affine Chain:" + input->name());
         }
         {
            OpenThreads::ScopedLock<OpenThreads::Mutex> lock(m_mutex);
            callback = m_callback;
         }
     }
      
   }
   if(callback.valid()&&callback->enabled()&&notifyFlag)
   {
      callback->nodeAdded(result.get());
   }
   return result.get();
}

ossimRefPtr<ossimGui::DataManager::Node> ossimGui::DataManager::createChainFromTemplate(const ossimString& templatChain, 
                                                                                        ossimRefPtr<Node> input,
                                                                                        bool notifyFlag)
{
   ossimKeywordlist kwl;
   
   if(kwl.parseString(templatChain))
   {
      return createChainFromTemplate(kwl, input.get(), notifyFlag);
   }
   
   return 0;
}

ossimRefPtr<ossimGui::DataManager::Node> ossimGui::DataManager::createChainFromTemplate(const ossimKeywordlist& templatChain, 
                                                                                        ossimRefPtr<Node> input,
                                                                                        bool notifyFlag)
{
   ossimRefPtr<Node> result;
   ossimConnectableObject* connectableInput = input->getObjectAsConnectable();
   ossimRefPtr<Callback> callback;
   
   ossimRefPtr<ossimObject> obj = ossimObjectFactoryRegistry::instance()->createObject(templatChain);
   if(obj.valid())
   {
      ossimRefPtr<ossimConnectableObject> connectable = dynamic_cast<ossimConnectableObject*> (obj.get());
      connectable->connectMyInputTo(connectableInput);
      result = new Node(connectable.get());
      
      {
         OpenThreads::ScopedLock<OpenThreads::Mutex> lock(m_mutex);
         m_chainList.push_back(result.get());
         addIndexMapping(result.get());
         
         result->setName(input->name());
         callback = m_callback;
      }
   }
   if(callback.valid()&&callback->enabled()&&notifyFlag)
   {
      callback->nodeAdded(result.get());
   }
   
   return result.get();
}

ossimRefPtr<ossimGui::DataManager::Node> ossimGui::DataManager::createDefaultCombinerChain(const ossimString& combinerType, NodeListType& nodeList, bool notifyFlag)
{
   ossimRefPtr<Node> result;
   ossimRefPtr<ossimImageSource> obj = ossimImageSourceFactoryRegistry::instance()->createImageSource(combinerType);
   ossimRefPtr<ossimImageCombiner> combinerObj = dynamic_cast<ossimImageCombiner*>(obj.get());
   ossimRefPtr<Callback> callback;
   if(combinerObj.valid())
   {
         // we will need to make the combiner chain a template as well and remove from here
      ossimString combinerChain = 
      "type:ossimImageChain\n"
      "object0.type:ossimBandSelector\n"
      "object5.type:ossimHistogramRemapper\n"
      "object40.type:ossimBrightnessContrastSource\n"
      "object50.type:ossimHsiRemapper\n";
      
      ossimKeywordlist kwl;
      if(kwl.parseString(combinerChain))
      {
         ossimRefPtr<ossimImageSource> chainObj = ossimImageSourceFactoryRegistry::instance()->createImageSource(kwl);
         if(chainObj.valid())
         {
            ossimRefPtr<ossimImageChain> chain = dynamic_cast<ossimImageChain*> (chainObj.get());
            if(chain.valid())
            {
               chain->addLast(combinerObj.get());
               result = new Node(chain.get());
               m_chainList.push_back(result.get());
               result->setName(combinerType.c_str());
               addIndexMapping(result.get());
               if(!nodeList.empty())
               {
                  NodeListType::iterator iter = nodeList.begin();
                  while(iter!=nodeList.end())
                  {
                     if((*iter)->getObject())
                     {
                        ossimConnectableObject* connectable = (*iter)->getObjectAs<ossimConnectableObject>();
                        if(connectable)
                        {
                           chain->connectMyInputTo(connectable);
                        }
                     }
                     ++iter;
                  }
               }
               if(m_callback.valid()&&m_callback->enabled()&&notifyFlag)
               {
                  OpenThreads::ScopedLock<OpenThreads::Mutex> lock(m_mutex);
                  callback = m_callback.get();
               }
            }
         }
      }
   }
   if(result.valid())
   {
      if(callback.valid())
      {
         callback->nodeAdded(result.get());
      }
   }
   return result;
}

ossimRefPtr<ossimGui::DataManager::Node> ossimGui::DataManager::createDefault2dImageDisplay(ossimRefPtr<Node> input, bool notifyFlag)
{
   ImageMdiSubWindow* display = new ImageMdiSubWindow();
   ossimRefPtr<ossimGui::DataManager::Node> result = addSource(display->connectableObject(), notifyFlag);
   if(m_mdiArea)
   {
      m_mdiArea->addSubWindow(display);
   }
   if(result.valid())
   {
      display->setWindowTitle(result->name());
   }

   if(display->connectableObject()&&input.valid()&&input->getObjectAsConnectable())
   {
      display->connectableObject()->connectMyInputTo(0, input->getObjectAsConnectable());
   }
   
   return result.get();
}

ossimRefPtr<ossimGui::DataManager::Node> ossimGui::DataManager::createDefault3dPlanetaryDisplay(bool notifyFlag)
{
#ifdef OSSIM_PLANET_ENABLED
   PlanetMdiSubWindow* display = new PlanetMdiSubWindow();
   if(m_mdiArea)
   {
      m_mdiArea->addSubWindow(display);
   }
   ossimRefPtr<ossimGui::DataManager::Node> result = addSource(display->connectableObject(), notifyFlag);
   if(result.valid())
   {
      result->setName("Planetary Viewer");
      display->setWindowTitle("Planetary Viewer");
   }
   display->show();
   return result.get();
#else
   return 0;
#endif
}

void ossimGui::DataManager::accept(ossimVisitor& visitor)
{
   OpenThreads::ScopedLock<OpenThreads::Mutex> lock(m_mutex);
   NodeListType::iterator iter = m_sourceList.begin();
   while(iter != m_sourceList.end())
   {
      (*iter)->accept(visitor);
      ++iter;
   }
   
   iter = m_chainList.begin();
   while(iter != m_chainList.end())
   {
      (*iter)->accept(visitor);
      
      ++iter;
   }
   iter = m_displayList.begin();
   while(iter != m_displayList.end())
   {
      (*iter)->accept(visitor);
      
      ++iter;
   }
}

void ossimGui::DataManager::print()
{
   OpenThreads::ScopedLock<OpenThreads::Mutex> lock(m_mutex);
   ossim_uint32 idx = 0;
   for(idx =0; idx < m_sourceList.size();++idx)
   {
      std::cout << "Name: " << m_sourceList[idx]->name().toAscii().data() << std::endl;
   }
   
   for(idx=0;idx < m_chainList.size();++idx)
   {
      std::cout << "Name: " << m_chainList[idx]->name().toAscii().data() << std::endl;
   }
   for(idx=0;idx < m_displayList.size();++idx)
   {
      std::cout << "Name: " << m_displayList[idx]->name().toAscii().data() << std::endl;
   }
   
}

void ossimGui::DataManager::clear(bool notifyFlag)
{
   ossimRefPtr<Callback> callback;
   NodeListType removedNodes;
   {
      {
         OpenThreads::ScopedLock<OpenThreads::Mutex> lock(m_mutex);
      
         removedNodes.insert(removedNodes.end(), m_sourceList.begin(), m_sourceList.end());
         removedNodes.insert(removedNodes.end(), m_chainList.begin(), m_chainList.end());
         removedNodes.insert(removedNodes.end(), m_displayList.begin(), m_displayList.end());
         m_sourceList.clear();
         m_chainList.clear();
         m_displayList.clear();
      }
      ossim_uint32 idx = 0;
      for(idx = 0; idx < removedNodes.size(); ++idx)
      {
         remove(removedNodes[idx],false);
      }
      if(m_callback.valid()&&m_callback->enabled()&&notifyFlag)
      {
         callback = m_callback;
      }
   }
   if(callback.valid())
   {
      callback->nodesRemoved(removedNodes);
   }
   ossim_uint32 idx = 0;
   // disconnect outside the scope lock for there might be a call to the remove from outside this interface
   for(idx = 0; idx < removedNodes.size(); ++idx)
   {
      ossimConnectableObject* connectable = removedNodes[idx]->getObjectAsConnectable();
      if(connectable) connectable->disconnect();
   }
}

bool ossimGui::DataManager::saveState(ossimKeywordlist& kwl, const ossimString& prefix)const
{
   OpenThreads::ScopedLock<OpenThreads::Mutex> lock(m_mutex);
   
   kwl.add(prefix,
           "type",
           "DataManager",
           true);
   ossimString nodePrefix = prefix + "objectList.object";
   ossim_uint32 idx = 0;
   ossim_uint32 nodeIdx = 0;
   for(idx =0; idx < m_sourceList.size();++idx)
   {
      ossimString nodeNumberPrefix = nodePrefix + ossimString::toString(nodeIdx) + ".";
      m_sourceList[idx]->saveState(kwl, nodeNumberPrefix);
      ++nodeIdx;
   }
   
   for(idx=0;idx < m_chainList.size();++idx)
   {
      ossimString nodeNumberPrefix = nodePrefix + ossimString::toString(nodeIdx) + ".";
      m_chainList[idx]->saveState(kwl, nodeNumberPrefix);
      
      ++nodeIdx;
   }
   for(idx=0;idx < m_displayList.size();++idx)
   {
      ossimString nodeNumberPrefix = nodePrefix + ossimString::toString(nodeIdx) + ".";
      m_displayList[idx]->saveState(kwl, nodeNumberPrefix);
      
      ++nodeIdx;
   }
   return true;
}

bool ossimGui::DataManager::loadState(const ossimKeywordlist& kwl, const ossimString& prefix)
{
   bool result = true;
   NodeListType nodes;
   
   ossimRefPtr<Callback> callback;
   {
      OpenThreads::ScopedLock<OpenThreads::Mutex> lock(m_mutex);
      if(m_callback.valid()&&m_callback->enabled())
      {
         callback = m_callback;
      }
      ossimString copyPrefix = prefix;
      ossimString type = kwl.find(copyPrefix, "type");
      ossimString regExpression =  ossimString("^(") + copyPrefix + "objectList.object[0-9]+.)";
      std::vector<ossimString> nodeKeys;
      kwl.getSubstringKeyList( nodeKeys, regExpression );
      ossim_uint32 nNodes = nodeKeys.size();
      ossim_uint32 nodeKeyOffset = (copyPrefix.size()+ossimString("objectList.object").size());
      std::vector<ossim_uint32> nodeKeyIndices(nNodes);
      ossim_uint32 idx = 0;
      for(idx = 0; idx < nodeKeyIndices.size();++idx)
      {
         ossimString numberStr(nodeKeys[idx].begin() + nodeKeyOffset,
                               nodeKeys[idx].end());
         nodeKeyIndices[idx] = numberStr.toInt();
      }
      std::sort(nodeKeyIndices.begin(), nodeKeyIndices.end());
      
      
      // first allocate the nodes before we can connect them
      //
      for(idx=0;((idx < (int)nodeKeyIndices.size())&&result);++idx)
      {
         ossimString newPrefix = copyPrefix;
         newPrefix += ossimString("objectList.object");
         newPrefix += ossimString::toString(nodeKeyIndices[idx]);
         newPrefix += ossimString(".");
         
         ossimRefPtr<Node> node = new Node();
         if(node->loadState(kwl, newPrefix))
         {
            nodes.push_back(node.get());
            if(node->supportsInputs())
            {
               if(dynamic_cast<ConnectableDisplayObject*> (node->getObject()))
               {
                  m_displayList.push_back(node.get());
               }
               else 
               {
                  m_chainList.push_back(node.get());
               }

            }
            else
            {
               m_sourceList.push_back(node.get());
            }
            addIndexMapping(node.get());
         }
         else 
         {
            result = false;
         }
         
      } 
      if(result)
      {
         for(idx = 0; idx < nodeKeyIndices.size();++idx)
         {
            ossimRefPtr<ossimConnectableObject> connectable = nodes[idx]->getObjectAsConnectable();
            if(connectable.valid())
            {
               if(nodes[idx]->supportsInputs())
               {
                  ossimString newPrefix = copyPrefix;
                  newPrefix += ossimString("objectList.object");
                  newPrefix += ossimString::toString(nodeKeyIndices[idx]);
                  newPrefix += ossimString(".");
                  std::vector<ossimId> ids;
                  findInputConnectionIds(ids, kwl, newPrefix); 
                  if(ids.size())
                  {
                     ossim_uint32 idsIndex = 0;
                     for(idsIndex = 0; idsIndex < ids.size(); ++idsIndex)
                     {
                        ossimRefPtr<Node> inputNode = findNodeNoMutex(ids[idsIndex]);
                        if(inputNode.valid())
                        {
                           ossimRefPtr<ossimConnectableObject> inputConnectable = inputNode->getObjectAsConnectable();
                           if(inputConnectable.valid())
                           {
                              connectable->connectMyInputTo(inputConnectable.get());
                           }
                        }
                     }
                  }
               }
            }
         }
      }
   }   
   if(!nodes.empty()&&callback.valid())
   {
      callback->nodesAdded(nodes);
   }
   return result;
}

bool ossimGui::DataManager::removeIndexMapping(Node* node)
{
   bool objectFound = false;
   NodeMapType::iterator nodeMapIter=m_nodeMap.find(node->getObject());
   if(nodeMapIter!=m_nodeMap.end())
   {
      objectFound = true;
      m_nodeMap.erase(nodeMapIter);
   }
   NodeIdMapType::iterator idMapIter=m_idMap.find(node->id());
   if(idMapIter!=m_idMap.end())
   {
      objectFound = true;
      m_idMap.erase(idMapIter);
   }
   
   return objectFound;
}
ossimGui::DataManager::Node* ossimGui::DataManager::findNode(const ossimId& id)
{
   OpenThreads::ScopedLock<OpenThreads::Mutex> lock(m_mutex);
   return findNodeNoMutex(id);
}

ossimGui::DataManager::Node* ossimGui::DataManager::findNodeNoMutex(const ossimId& id)
{
   Node* result = 0;
   NodeIdMapType::iterator idMapIter=m_idMap.find(id);
   
   if(idMapIter != m_idMap.end())
   {
      result = idMapIter->second.get();
   }
   
   return result;
}

void ossimGui::DataManager::addIndexMapping(Node* node)
{
   if(node)
   {
      m_idMap.insert(std::make_pair(node->id(), node));
      m_nodeMap.insert(std::make_pair(node->getObject(), node));
   }
}

void ossimGui::DataManager::findInputConnectionIds(std::vector<ossimId>& result,
                                                   const ossimKeywordlist& kwl,
                                                   const ossimString& prefix)
{
   ossimString copyPrefix = prefix;
   ossim_uint32 idx = 0;
   
   ossimString regExpression =  ossimString("^") + ossimString(prefix) + "input_connection[0-9]+";
   vector<ossimString> keys =
   kwl.getSubstringKeyList( regExpression );
   
   ossim_int32 offset = (ossim_int32)(copyPrefix+"input_connection").size();
   ossim_uint32 numberOfKeys = (ossim_uint32)keys.size();
   std::vector<int> numberList(numberOfKeys);
   for(idx = 0; idx < numberList.size();++idx)
   {
      ossimString numberStr(keys[idx].begin() + offset,
                            keys[idx].end());
      numberList[idx] = numberStr.toInt();
   }
   std::sort(numberList.begin(), numberList.end());
   copyPrefix += ossimString("input_connection");
   for(idx=0;idx < numberList.size();++idx)
   {
      const char* lookup = kwl.find(copyPrefix,ossimString::toString(numberList[idx]));
      if(lookup)
      {
         ossim_int64 id = ossimString(lookup).toInt64();
         result.push_back(ossimId(id));
      }
   }
}

