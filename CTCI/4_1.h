//
//  4_1.h
//  CTCI
//
//  Created by Edison on 8/10/14.
//  Copyright (c) 2014 Edison. All rights reserved.
//

#ifndef __CTCI____1__
#define __CTCI____1__

struct node{
    int data;
    node* left;
    node* right;
    node(){
        data = 0;
        left = nullptr;
        right =  nullptr;
    }
};

class tree{
public:
    tree();
    int getValue();
    int getHeight(node* root,int height);
    void traversal(node* root);
    bool isBalance(node* root);
    node* root;
};

#endif /* defined(__CTCI____1__) */
