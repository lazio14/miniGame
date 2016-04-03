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
    cocos2dVecIterator(cocos2d::Vector<T>* aList);
    virtual ~cocos2dVecIterator();
    virtual void first() override;
    virtual void next() override;
    virtual bool isDone() const override;
    virtual T currentItem() const override;
    
private:
    cocos2d::Vector<T>* _list;
    long _current;
    
};


#endif /* defined(__miniGame__cocos2dVecIterator__) */
