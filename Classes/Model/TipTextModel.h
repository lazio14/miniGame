//
//  TipTextModel.h
//  miniGame
//
//  Created by lazio14 on 16/4/4.
//
//

#ifndef __miniGame__TipTextModel__
#define __miniGame__TipTextModel__

#include <map>
#include <string>

class TipTextModel
{
public:
    static TipTextModel& get();
    virtual ~TipTextModel();
    std::string ID2String(int nId);
    bool loadTipText();

private:
    TipTextModel();
    
private:
    std::map<std::string, std::string> m_tipTextMap;
};

#endif /* defined(__miniGame__TipTextModel__) */
