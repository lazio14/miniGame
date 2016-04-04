//
//  GameInit.cpp
//  miniGame
//
//  Created by lazio14 on 16/4/1.
//
//

#include "GameInit.h"
#include "HelloWorldScene.h"
#include "MsgDispatcher.h"
USING_NS_CC;

GameInit::GameInit()
{
    loadTipTextXML();
    Director::getInstance()->getScheduler()->schedule(schedule_selector(GameInit::scheduleSelectorUpdate), this, cocos2d::Scheduler::PRIORITY_SYSTEM, false);
}

GameInit::~GameInit()
{
    
}

void GameInit::beginGame()
{
    Director::getInstance()->runWithScene(HelloWorld::createScene());
}

void GameInit::loadTipTextXML()
{
    
}

void GameInit::scheduleSelectorUpdate(float)
{
    MsgDispatcher::getInstance()->dispatchMsg();
}