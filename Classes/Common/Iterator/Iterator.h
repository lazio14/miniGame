//
//  Iterator.h
//  miniGame
//
//  Created by lazio14 on 16/4/3.
//
//

#ifndef miniGame_Iterator_h
#define miniGame_Iterator_h

template <class T>
class Iterator
{
public:
    virtual void first() = 0;
    virtual void next() = 0;
    virtual bool isDone() const = 0;
    virtual T currentItem() const = 0;
};

#endif



