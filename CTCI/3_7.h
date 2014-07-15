//
//  3_7.h
//  CTCI
//
//  Created by Edison on 7/15/14.
//  Copyright (c) 2014 Edison. All rights reserved.
//

#ifndef __CTCI____7__
#define __CTCI____7__
#include <string>

struct node{
    std::string type;
    node* next;
};

class animalQueue{
public:
    animalQueue();
    void enqueue(node animal);
    node dequeue();
    node dequeueDog();
    node dequeueCat();
private:
    node *root;
};

#endif /* defined(__CTCI____7__) */
