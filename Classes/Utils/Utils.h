//
//  Utils.h
//  miniGame
//
//  Created by lazio14 on 16/4/4.
//
//

#ifndef __miniGame__Utils__
#define __miniGame__Utils__

#include <map>
#include <string>

class Utils
{
public:

    template <typename T>
    static std::string toString(T input)
    {
        std::stringstream ss;
        ss << input;
        return ss.str();
    }
};

#endif /* defined(__miniGame__Utils__) */
