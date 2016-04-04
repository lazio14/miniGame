//
//  ManageMsg.cpp
//  miniGame
//
//  Created by lazio14 on 16/4/3.
//
//

#include "ManageMsg.h"

ManageMsg::ManageMsg() : m_iter(NULL)
{
    
}

ManageMsg* ManageMsg::getInstance()
{
    static auto instance = new ManageMsg();
    return instance;
}

ManageMsg::~ManageMsg()
{
    if (m_iter)
    {
        delete m_iter;
        m_iter = NULL;
    }
}

void ManageMsg::appendMsg(int msgId, unsigned int exData)
{
    auto msg = new Msg(msgId, exData);
    m_msglist.pushBack(msg);
}


void ManageMsg::removeAllMsg()
{
    m_msglist.clear();
}

Iterator<Msg*>* ManageMsg::createItertor()
{
    if (m_iter)
    {
        delete m_iter;
        m_iter = NULL;
    }
    
    m_iter = new cocos2dVecIterator<Msg*>(&m_msglist);
    return m_iter;
}