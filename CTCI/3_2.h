//
//  3_2.h
//  CTCI
//
//  Created by Edison on 7/6/14.
//  Copyright (c) 2014 Edison. All rights reserved.
//

#ifndef __CTCI____2__
#define __CTCI____2__

class minStack{
public:
    minStack();
    void pop();
    void push(int data);
    int min();
private:
    int m_size,m_index;
    int m_array[100];
};
#endif /* defined(__CTCI____2__) */
