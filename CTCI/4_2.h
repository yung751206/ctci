//
//  4_2.h
//  CTCI
//
//  Created by Edison on 8/15/14.
//  Copyright (c) 2014 Edison. All rights reserved.
//

#ifndef __CTCI____2__
#define __CTCI____2__
#include <list>

class graph{
public:
    graph(int numNode);
    bool path(int from,int to);
    void connect(int from,int to);
    void traversal();
private:
    std::list<int> *graphList;
};

#endif /* defined(__CTCI____2__) */
