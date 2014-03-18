//
//  GraySprite.h
//  exGraySprite
//
//  Created by 이정우 on 13. 8. 29..
//
//

#ifndef __exGraySprite__GraySprite__
#define __exGraySprite__GraySprite__


#include "CCGeometry.h"
#include "cocos2d.h"
USING_NS_CC;

class GraySprite : public CCSprite{
    
    
public:
    GraySprite();
    virtual ~GraySprite();
    static GraySprite* create(const char* pszFileName);
    bool initWithTexture(CCTexture2D* pTexture, const CCRect& tRect);
    void setGray (bool isGray);
    virtual void draw();
};

#endif /* defined(__exGraySprite__GraySprite__) */
