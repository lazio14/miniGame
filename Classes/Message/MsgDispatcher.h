//
//  MsgDispatcher.h
//  miniGame
//
//  Created by lazio14 on 16/4/3.
//
//

#ifndef __miniGame__MsgDispatcher__
#define __miniGame__MsgDispatcher__

#include "CommDef.h"
#include "IMsgListen.h"

class MsgDispatcher
{
public:
    virtual ~MsgDispatcher();
    static MsgDispatcher& getInstance();
    
    void dispatchMsg(float delta);
    void addMsgListener(IMsgListen* listener);
    void removeMsgListener(IMsgListen * listener);
        
private:
    MsgDispatcher();
private:
    std::vector<IMsgListen*>* msgListenerVec;
};

#endif /* defined(__miniGame__MsgDispatcher__) */
