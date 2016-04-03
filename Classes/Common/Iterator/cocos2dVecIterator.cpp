//
//  cocos2dVecIterator.cpp
//  miniGame
//
//  Created by lazio14 on 16/4/3.
//
//

#include "cocos2dVecIterator.h"

template <class T>
cocos2dVecIterator<T>::cocos2dVecIterator(cocos2d::Vector<T>* aList) :
_list(aList), _current(0)
{
    
}

template <class T>
void cocos2dVecIterator<T>::first()
{
    _current = 0;
}

template <class T>
void cocos2dVecIterator<T>::next()
{
    ++_current;
}

template <class T>
bool cocos2dVecIterator<T>::isDone() const
{
    return _current >= _list->size();
}

template <class T>
T cocos2dVecIterator<T>::currentItem() const
{
    if (isDone())
    {
        CCASSERT(false, "ITERATOR OUT OF BOUNDS");
    }
    return _list->at(_current);
}





