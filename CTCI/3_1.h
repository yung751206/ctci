/*//
//  3_1.h
//  CTCI
//
//  Created by Edison on 7/6/14.
//  Copyright (c) 2014 Edison. All rights reserved.
//

#ifndef __CTCI____1__
#define __CTCI____1__

class threeStacks{
public:
    threeStacks();
    void pop(int index);
    void push(int index,int data);
    int top(int index);
    int size(int index);
    
private:
    int m_indexOne,m_indexTwo,m_indexThree;
    int numOne,numTwo,numThree;
    int m_size;
    int m_array[99];
    
};

#endif /* defined(__CTCI____1__) */
