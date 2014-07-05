/*//
//  2_3.cpp
//  CTCI
//
//  Created by Edison on 6/28/14.
//  Copyright (c) 2014 Edison. All rights reserved.
//

#include <iostream>
using namespace std;

struct node{
    int data;
    node *next;
};

bool deleteNode(node* n){
    if(n == nullptr)
        return false;
    node *temp = n->next;
    n->data = temp->data;
    n->next = temp->next;
    return true;
}

int main(){
    node* root = new node;
    node* temp = root;
    root->data = 4;
    root->next = new node;
    root->next->data = 5;
    root->next->next = new node;
    root->next->next->data = 6;
    root->next->next->next = new node;
    root->next->next->next->data = 7;
    cout<<deleteNode(root->next)<<endl;
    while(temp!=nullptr){
        cout<<temp->data<<endl;
        temp = temp->next;
    }
    return 0;
}*/
