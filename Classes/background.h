//
//  background.h
//  sickhero_demo
//
//  Created by 林少川 on 15/8/25.
//
//

#ifndef __sickhero_demo__background__
#define __sickhero_demo__background__

#include <stdio.h>
#include "cocos2d.h"
USING_NS_CC;
class background : public cocos2d:: Layer
{
public:
    static Layer* createlayer();
    background();
    ~background();
    virtual bool init();
    void backmove(float);
    
    CREATE_FUNC(background);

    Sprite* image_one;
    Sprite* image_two;
    
   
    
};
#endif /* defined(__sickhero_demo__background__) */
