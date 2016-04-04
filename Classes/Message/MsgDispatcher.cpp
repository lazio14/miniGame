//
//  MsgDispatcher.cpp
//  miniGame
//
//  Created by lazio14 on 16/4/3.
//
//

#include "MsgDispatcher.h"
#include "ManageMsg.h"

MsgDispatcher* MsgDispatcher::getInstance()
{
    static auto instance = new MsgDispatcher();
    return instance;
}

MsgDispatcher::MsgDispatcher()
{
    m_msgListenerVec.clear();
}

MsgDispatcher::~MsgDispatcher()
{
    m_msgListenerVec.clear();
}

void MsgDispatcher::dispatchMsg()
{
    Iterator<Msg*>* msgIter = ManageMsg::getInstance()->createItertor();
    for (msgIter->first(); !msgIter->isDone(); msgIter->next())
    {
        auto msg = msgIter->currentItem();
        if(msg == NULL)
        {
            continue;
        }
        
        for (auto iter = m_msgListenerVec.rbegin(); iter != m_msgListenerVec.rend(); ++iter)
        {
            auto listener = (*iter);
            if (listener)
            {
                listener->excuteMsg(msg);
            }
        }
    }
    
    ManageMsg::getInstance()->removeAllMsg();
}

void MsgDispatcher::addMsgListener(IMsgListen* listener)
{
    auto result = find(m_msgListenerVec.begin(), m_msgListenerVec.end(), listener);
    if (result == m_msgListenerVec.end())
    {
        m_msgListenerVec.push_back(listener);    
    }
}

void MsgDispatcher::removeMsgListener(IMsgListen* listener)
{
    auto result = find(m_msgListenerVec.begin(), m_msgListenerVec.end(), listener);
    if (result != m_msgListenerVec.end())
    {
        m_msgListenerVec.erase(result);
    }
}