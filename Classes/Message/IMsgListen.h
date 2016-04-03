//
//  IMsgListen.h
//  miniGame
//
//  Created by lazio14 on 16/4/2.
//
//

#ifndef miniGame_IMsgListen_h
#define miniGame_IMsgListen_h

class IMsgListen
{
public:
    virtual ~IMsgListen();
    bool excuteMsg();
protected:
    IMsgListen();
};

#endif
