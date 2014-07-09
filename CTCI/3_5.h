//
//  3_5.h
//  CTCI
//
//  Created by Edison on 7/9/14.
//  Copyright (c) 2014 Edison. All rights reserved.
//

#ifndef __CTCI____5__
#define __CTCI____5__
#include <stack>

class myQueue{
public:
    myQueue();
    void deQueue();
    void enQueue(int data);
    int first();
    
private:
    std::stack<int> mStack[2];
};

#endif /* defined(__CTCI____5__) */
