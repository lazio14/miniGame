//
//  GameInit.cpp
//  miniGame
//
//  Created by lazio14 on 16/4/1.
//
//

#include "GameInit.h"
#include "HelloWorldScene.h"
USING_NS_CC;

GameInit::GameInit()
{
    loadTipTextXML();
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