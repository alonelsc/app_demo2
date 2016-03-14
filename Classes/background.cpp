//
//  background.cpp
//  sickhero_demo
//
//  Created by 林少川 on 15/8/25.
//
//

#include "background.h"
USING_NS_CC;

background::background(){
    
}
background::~background(){
    
}
auto visibalesize  = Director::getInstance()->getVisibleSize();
Vec2 orign = Director::getInstance()->getVisibleOrigin();

bool background::init(){
    if (!Layer::create()) {
        return false;
    }
    srand((int)time(0));
    int rand_num = rand()%5+1;
    switch (rand_num) {
        case 0:
           image_one =  Sprite::create("bg1.jpg");
           image_two =  Sprite::create("bg1.jpg");
            break;
        case 1:
            image_one = Sprite::create("bg2.jpg");
            image_two = Sprite::create("bg2.jpg");
            break;
        case 2:
            image_one =  Sprite::create("bg3.jpg");
            image_two =  Sprite::create("bg3.jpg");
            break;
        case 3:
            image_one =  Sprite::create("bg4.jpg");
            image_two =  Sprite::create("bg4.jpg");
            break;
        case 4:
            image_one =  Sprite::create("bg5.jpg");
            image_two =  Sprite::create("bg5.jpg");
            break;
    
        default:
            break;
    }
   
    
//    image_one->setPosition(600, 320);
    //   image_two->setPosition(1000, 320);

   image_one->setPosition(visibalesize.width/4+orign.x,visibalesize.height/4+orign.y);
    image_two->setPosition(visibalesize.width/4+orign.x+image_two->getContentSize().width,visibalesize.height/4+orign.y);
    
     this->addChild(image_one);
    this->addChild(image_two);
   
    Sprite* GameName = Sprite::create("uires_1.png");
    GameName->setPosition(visibalesize.width/2+orign.x,visibalesize.height/5*4+orign.y);
    this->addChild(GameName,2);
    return true;
}