//
//  Msg.h
//  miniGame
//
//  Created by lazio14 on 16/4/3.
//
//

#ifndef __miniGame__Msg__
#define __miniGame__Msg__

#include "cocos2d.h"

class Msg : public cocos2d::Ref
{
public:
    explicit Msg(int msgId, unsigned int exData);
    virtual ~Msg();
    
    
public:
    int m_msgId;
    unsigned int m_exData;
};

#endif /* defined(__miniGame__Msg__) */
