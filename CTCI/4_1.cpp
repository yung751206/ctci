//
//  4_1.cpp
//  CTCI
//
//  Created by Edison on 8/10/14.
//  Copyright (c) 2014 Edison. All rights reserved.
//

#include "4_1.h"
#include <iostream>
using namespace std;

int tree::getValue(){
    return root->data;
}

tree::tree(){
    root = nullptr;
}


void tree::traversal(node* root){
    if(root == nullptr){
        return;
    }
    cout<<root->data<<endl;
    traversal(root->left);
    traversal(root->right);
}

int tree::getHeight(node* root,int height){
    int nl,nr;
    if(root == nullptr){
        return height;
    }
    height++;
    nl = getHeight(root->left,height);
    nr = getHeight(root->right,height);
    if(nl <= nr)
        return nr;
    else
        return nl;
}

bool tree::isBalance(node* root){
    bool left,right;
    int leftHeight,rightHeight;
    if(root == nullptr)
        return true;
    leftHeight = getHeight(root->left,0);
    rightHeight = getHeight(root->right,0);
    if(abs(leftHeight - rightHeight) > 1)
        return false;
    left = isBalance(root->left);
    right = isBalance(root->right);
    return (left && right);
}
//bool tree::isBalance(node* root){

//}










