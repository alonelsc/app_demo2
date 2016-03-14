//
//  Welcome.h
//  sickhero_demo
//
//  Created by 林少川 on 15/8/25.
//
//

#ifndef __sickhero_demo__Welcome__
#define __sickhero_demo__Welcome__

#include <stdio.h>
#include "cocos2d.h"
#include "background.h"
USING_NS_CC;
class WelcomeScene:public Scene
{
public:
    static cocos2d::Scene* creatsecne();
//    WelcomeScene();
//    ~WelcomeScene();
    void menuCloseCallback(cocos2d::Ref* pSender);
    CREATE_FUNC(WelcomeScene);
    virtual bool init();
};

#endif /* defined(__sickhero_demo__Welcome__) */
