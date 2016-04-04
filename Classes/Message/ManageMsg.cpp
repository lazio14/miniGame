//
//  ManageMsg.cpp
//  miniGame
//
//  Created by lazio14 on 16/4/3.
//
//

#include "ManageMsg.h"

ManageMsg::ManageMsg()
{
    
}

ManageMsg* ManageMsg::getInstance()
{
    static auto instance = new ManageMsg();
    return instance;
}

ManageMsg::~ManageMsg()
{
    
}

void ManageMsg::appendMsg(int msgId, unsigned int exData)
{
    auto msg = new Msg(msgId, exData);
    m_msglist.pushBack(msg);
}


void ManageMsg::removeAllMsg()
{
    m_msglist.eraseObject(NULL, true);
}

Iterator<Msg*> ManageMsg::createItertor()
{
    new cocos2dVecIterator<Msg*>();
}