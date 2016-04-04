//
//  IMsgListen.cpp
//  miniGame
//
//  Created by lazio14 on 16/4/2.
//
//

#include "IMsgListen.h"
#include "MsgDispatcher.h"


IMsgListen::IMsgListen()
{
    MsgDispatcher::getInstance()->addMsgListener(this);
}

IMsgListen::~IMsgListen()
{
    MsgDispatcher::getInstance()->removeMsgListener(this);
}

bool IMsgListen::excuteMsg()
{
    return true;
}