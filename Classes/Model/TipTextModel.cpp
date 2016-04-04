//
//  TipTextModel.cpp
//  miniGame
//
//  Created by lazio14 on 16/4/4.
//
//

#include "TipTextModel.h"
#include "cocos2d.h"
#include "Utils.h"
#include "tinyxml2/tinyxml2.h"

using namespace tinyxml2;
USING_NS_CC;



TipTextModel& TipTextModel::get()
{
    static TipTextModel ins;
    return ins;
}

TipTextModel::~TipTextModel()
{
    
}

TipTextModel::TipTextModel()
{
    m_tipTextMap.clear();
}

bool TipTextModel::loadTipText()
{
    bool ret = false;
    do
    {
        FileUtils::getInstance()->addSearchPath("config");
        auto filePath = FileUtils::getInstance()->fullPathForFilename("tips.xml");
        XMLDocument *pDoc = new XMLDocument();
        XMLError errorId = pDoc->LoadFile(filePath.c_str());
        
        CC_BREAK_IF(errorId != 0);
        XMLElement *rootEle = pDoc->RootElement();
        XMLElement *arrayEle = rootEle->FirstChildElement("tips");
        XMLElement *childEle = arrayEle->FirstChildElement();
        while ( childEle )
        {
            std::string key = childEle->FirstAttribute()->Value();
            m_tipTextMap[key] = childEle->GetText();
            childEle = childEle->NextSiblingElement();
        }
        delete pDoc;
        ret = true;
    }while (0);
    
    return ret;
}

std::string TipTextModel::ID2String(int nId)
{
    std::string k = Utils::toString(nId);
    if (m_tipTextMap.find(k) != m_tipTextMap.end())
    {
        return m_tipTextMap[k];
    }
    return std::string("");
}