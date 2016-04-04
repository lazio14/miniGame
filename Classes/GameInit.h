//
//  GameInit.h
//  miniGame
//
//  Created by lazio14 on 16/4/1.
//
//

#ifndef miniGame_GameInit_h
#define miniGame_GameInit_h

#include "cocos2d.h"
class GameInit : public cocos2d::Ref
{
public:
    GameInit();
    virtual ~GameInit();
    void beginGame();
    void scheduleSelectorUpdate(float);
    
private:
    void loadTipTextXML();
    
};

#endif
