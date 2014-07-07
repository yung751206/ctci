//
//  main.cpp
//  CTCI
//
//  Created by Edison on 6/24/14.
//  Copyright (c) 2014 Edison. All rights reserved.
//

#include <iostream>
#include "3_3.h"
using namespace std;
int main(int argc, const char * argv[])
{
    node *root;
    root = new node;
    root->next = nullptr;
    for(int i=0;i<50;i++){
        push(i,root);
    }
    for(int i=0;i<50;i++){
        pop(root);
    }
}

