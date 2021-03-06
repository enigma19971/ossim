//*******************************************************************
// Copyright (C) 2000 ImageLinks Inc. 
//
// OSSIM is free software; you can redistribute it and/or
// modify it under the terms of the GNU General Public License 
// as published by the Free Software Foundation.
//
// This software is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. 
//
// You should have received a copy of the GNU General Public License
// along with this software. If not, write to the Free Software 
// Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA 02111-
// 1307, USA.
//
// See the GPL in the COPYING.GPL file for more details.
//
// Author: Garrett Potts (gpotts@imagelinks.com)
//
//*************************************************************************
// $Id: ossimQtVceImageHandlerObject.h 5757 2003-12-12 19:50:32Z gpotts $
#ifndef ossimQtVceImageHandlerObject_HEADER
#define ossimQtVceImageHandlerObject_HEADER
#include "ossimQtVceImageSourceObject.h"

class ossimQtVceImageHandlerObject: public ossimQtVceImageSourceObject
{
public:
   ossimQtVceImageHandlerObject(QCanvas* canvas,
                                QObject* vceParent);
   ossimQtVceImageHandlerObject(const QRect& bounds,
                               QCanvas* canvas,
                                QObject* vceParent);
   virtual ~ossimQtVceImageHandlerObject();
   virtual int rtti()const;

protected:
   virtual void drawShape(QPainter& painter);
};

#endif
