//
//  Welcome.cpp
//  sickhero_demo
//
//  Created by 林少川 on 15/8/25.
//
//

#include "Welcome.h"
#include "background.h"
USING_NS_CC;
Scene* WelcomeScene::creatsecne()
{
    auto scene =Scene::create();
    auto layer = WelcomeScene::creatsecne();
//    auto back  = background::create();
    
    scene->addChild(layer);
//    scene->addChild(back,1,1);
        return scene;
}



bool WelcomeScene:: init(){
    if (!Scene::init()) {
        return false;
    }
    auto back  = background::create();
    this->addChild(back,1,1);
    
    return true;
}
void WelcomeScene::menuCloseCallback(Ref* pSender)
{
#if (CC_TARGET_PLATFORM == CC_PLATFORM_WP8) || (CC_TARGET_PLATFORM == CC_PLATFORM_WINRT)
    MessageBox("You pressed the close button. Windows Store Apps do not implement a close button.","Alert");
    return;
#endif
    
    Director::getInstance()->end();
    
#if (CC_TARGET_PLATFORM == CC_PLATFORM_IOS)
    exit(0);
#endif
}