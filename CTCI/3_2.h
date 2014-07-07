/*//
//  3_2.h
//  CTCI
//
//  Created by Edison on 7/6/14.
//  Copyright (c) 2014 Edison. All rights reserved.
//

#ifndef __CTCI____2__
#define __CTCI____2__

class Stack{
public:
    Stack();
    virtual void pop();
    virtual void push(int data);
    int top();
    int size();
private:
    int m_size,m_index;
    int m_array[100];
};

class stackMin:public Stack{
public:
    int min();
    virtual void pop();
    virtual void push(int data);
private:
    Stack m_minStack;
};
#endif /* defined(__CTCI____2__) */
