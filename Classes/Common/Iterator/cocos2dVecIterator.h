//
//  cocos2dVecIterator.h
//  miniGame
//
//  Created by lazio14 on 16/4/3.
//
//

#ifndef __miniGame__cocos2dVecIterator__
#define __miniGame__cocos2dVecIterator__

#include "cocos2d.h"
#include "Iterator.h"

template <class T>
class cocos2dVecIterator : public Iterator<T>
{
public:
    cocos2dVecIterator<T>()
    {
        
    }
    
    virtual ~cocos2dVecIterator()
    {
        
    }
    
    virtual void first() override
    {
        _current = 0;
    }
    
    virtual void next() override
    {
        ++_current;
    }
    
    virtual bool isDone() const override
    {
        return _current >= _list->size();
    }
    
    virtual T currentItem() const override
    {
        if (isDone())
        {
            CCASSERT(false, "ITERATOR OUT OF BOUNDS");
        }
        return _list->at(_current);

    }
    
private:
    cocos2d::Vector<T>* _list;
    long _current;
    
};
#endif /* defined(__miniGame__cocos2dVecIterator__) */
