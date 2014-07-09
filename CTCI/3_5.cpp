//
//  3_5.cpp
//  CTCI
//
//  Created by Edison on 7/9/14.
//  Copyright (c) 2014 Edison. All rights reserved.
//

#include "3_5.h"

myQueue::myQueue(){
}

void myQueue::deQueue(){
    if( !mStack[1].empty() ){
        mStack[1].pop();
    }
    else if( mStack[1].empty() && !mStack[0].empty() ){
        while( !mStack[0].empty()){
            mStack[1].push(mStack[0].top());
            mStack[0].pop();
        }
        mStack[1].pop();
    }
}

void myQueue::enQueue(int data){
    mStack[0].push(data);
}

int myQueue::first(){
    if( !mStack[1].empty() ){
        return mStack[1].top();
    }
    else if( mStack[1].empty() && !mStack[0].empty() ){
        while( !mStack[0].empty()){
            mStack[1].push(mStack[0].top());
            mStack[0].pop();
        }
        return mStack[1].top();
    }
    return -1;
}