/*
 * CMXLayer.cpp
 * CMXLayer
 *
 * Created by tadashi atoji on 6/24/2013.
 * Copyright 2013 tadashi atoji. All rights reserved.
 */
 
#include "CMXLayer.h"
 
using namespace cocos2d;
 
CMXLayer::CMXLayer()
{
}
CMXLayer::~CMXLayer()
{
}
 
 
CMXLayer *CMXLayer::create()
{
    CMXLayer *pRet = new CMXLayer();
    if (pRet && pRet->init())
    {
        pRet->autorelease();
        pRet->m_nOpacity = 255;
        return pRet;
    }
    else
    {
        CC_SAFE_DELETE(pRet);
        return NULL;
    }
}
GLubyte CMXLayer::getOpacity(void){
    return m_nOpacity;
}
void CMXLayer::setOpacity(GLubyte opacity)
{
    m_nOpacity = opacity;
    CCObject* child;
    CCARRAY_FOREACH(m_pChildren, child)
    {
        CCNode* pNode = (CCNode*)child;
        cocos2d::CCRGBAProtocol *pRGBAProtocol = dynamic_cast<cocos2d::CCRGBAProtocol*>(pNode);
        if (pRGBAProtocol)
        {
            pRGBAProtocol->setOpacity(opacity);
        }
    }
}
