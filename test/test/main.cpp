//
//  main.cpp
//  test
//
//  Created by Edison on 6/30/14.
//  Copyright (c) 2014 Edison. All rights reserved.
//

#include <iostream>
using namespace std;

struct node{
    int data;
    node* next;
};

void test(node *n){
    node *temp = new node;
    temp->data = 1;
    temp->next = new node;
    temp->next->data = 2;
    n = new node;
    n->data = 4;
}
int main(int argc, const char * argv[])
{
    node *root = nullptr;
    test(root);
    while(root!=nullptr){
        cout<<root->data<<endl;
        root = root->next;
    }
    return 0;
}

