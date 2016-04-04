//
//  IMsgListen.h
//  miniGame
//
//  Created by lazio14 on 16/4/2.
//
//

#ifndef miniGame_IMsgListen_h
#define miniGame_IMsgListen_h

#include "Msg.h"

class IMsgListen
{
public:
    virtual ~IMsgListen();
    virtual bool excuteMsg(Msg* msg) = 0;
protected:
    IMsgListen();
};

#endif
