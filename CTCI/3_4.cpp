//
//  3_4.cpp
//  CTCI
//
//  Created by Edison on 7/8/14.
//  Copyright (c) 2014 Edison. All rights reserved.
//

#include "3_4.h"
#include <stack>
#include<iostream>
using namespace std;

tower::tower(int disk){
    mDisk = disk;
    for(int i=disk;i>0;i--){
		node temp;
		temp.disk = i;
		temp.preTower= -1;
        mStack[0].push(temp);
    }
}

bool tower::move(int from, int to){
    if (!mStack[from].empty() && !mStack[to].empty() ){
        if(mStack[from].top().disk < mStack[to].top().disk){
            if (mStack[from].top().preTower != to){
                node temp = mStack[from].top();
                mStack[from].pop();
                temp.preTower = from;
                mStack[to].push(temp);
                if ((to != 0) && !mStack[0].empty()){
                    mStack[0].top().preTower = -1;
                }
                if ((to != 1) && !mStack[1].empty()){
                    mStack[1].top().preTower = -1;
                }
                if ((to != 2) && !mStack[2].empty()){
                    mStack[2].top().preTower = -1;
                }
                return true;
            }
		}
	}
    else if (!mStack[from].empty() && mStack[to].empty() ){
        if (mStack[from].top().preTower != to){
            node temp = mStack[from].top();
            mStack[from].pop();
            temp.preTower = from;
            mStack[to].push(temp);
            if ((to != 0) && !mStack[0].empty()){
                mStack[0].top().preTower = -1;
            }
            if ((to != 1) && !mStack[1].empty()){
                mStack[1].top().preTower = -1;
            }
            if ((to != 2) && !mStack[2].empty()){
                mStack[2].top().preTower = -1;
            }
            return true;
        }
	}
    return false;
}

bool tower::moveRight(){
    if(move(0,1)){
        return true;
    }
    else if(move(1,2)){
        return true;
    }
    return false;
}

bool tower::moveLeft(){
    if(move(2,1)){
        return true;
    }
    else if(move(1,0)){
        return true;
    }
    return false;
}

void tower::printout(){
	bool move = true;
	while (move){
        move = false;
    while (moveRight())
        move = true;
	while (moveLeft())
        move = true;
    }
    debug();
}

void tower::debug(){
	while(mStack[0].empty()!=1){
	std::cout<<mStack[0].top().disk<<std::endl;
	mStack[0].pop();
	}
	cout << "---"<<endl;
	while (mStack[1].empty() != 1){
		std::cout << mStack[1].top().disk << std::endl;
		mStack[1].pop();
	}
	cout << "---" << endl;
	while (mStack[2].empty() != 1){
		std::cout << mStack[2].top().disk << std::endl;
		mStack[2].pop();
	}
	cout << "---" << endl<<endl;
}