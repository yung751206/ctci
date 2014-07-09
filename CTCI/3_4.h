//
//  3_4.h
//  CTCI
//
//  Created by Edison on 7/8/14.
//  Copyright (c) 2014 Edison. All rights reserved.
//

#ifndef __CTCI____4__
#define __CTCI____4__
#include <stack>

struct node{
	int disk;
	int preTower;
};
class tower{
public:
    tower(int disk);
    void printout();
	void debug();
private:
	bool moveRight();
	bool moveLeft();
	bool move(int from, int to);

    std::stack<node> mStack[3];
    int mDisk;
};

#endif /* defined(__CTCI____4__) */
