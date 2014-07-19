/*
 * CMXLayer.h
 * CMXLayer
 *
 * Created by tadashi atoji on 6/24/2013.
 * Copyright 2013 tadashi atoji. All rights reserved.
 */

#include "cocos2d.h"
 
class CMXLayer : public cocos2d::CCLayerRGBA
{
public:
    CMXLayer();
    ~CMXLayer();
    CC_PROPERTY(GLubyte, m_nOpacity, Opacity)
public:
    static CMXLayer *create(void);
};
