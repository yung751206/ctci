//
//  3_3.h
//  CTCI
//
//  Created by Edison on 7/6/14.
//  Copyright (c) 2014 Edison. All rights reserved.
//

#ifndef __CTCI____3__
#define __CTCI____3__

class Stack{
public:
    Stack();
    ~Stack();
	void pop();
	void push(int data);
    int top();
    int size();
private:
    int m_size,m_index;
    int *m_array;
    int limit;
};

struct node{
	Stack data;
	node *next;
};

void push(int data,node* root);
void pop(node* root);
#endif /* defined(__CTCI____2__) */

