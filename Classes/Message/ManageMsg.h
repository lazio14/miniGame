//
//  ManageMsg.h
//  miniGame
//
//  Created by lazio14 on 16/4/3.
//
//

#ifndef __miniGame__ManageMsg__
#define __miniGame__ManageMsg__

#include "Msg.h"
#include "cocos2dVecIterator.h"

class ManageMsg
{
    
public:
    static ManageMsg* getInstance();
    virtual ~ManageMsg();
    void appendMsg(int msgId, unsigned int exData);
    void removeAllMsg();
    
private:
    ManageMsg();
    
public:
    cocos2d::Vector<Msg*> m_msglist;
};

#endif /* defined(__miniGame__ManageMsg__) */
