//
//  MsgDispatcher.cpp
//  miniGame
//
//  Created by lazio14 on 16/4/3.
//
//

#include "MsgDispatcher.h"

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