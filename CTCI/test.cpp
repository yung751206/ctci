//============================================================================
// Name        : test.cpp
// Author      : Edison
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>
#include <algorithm>
#include "3_3.h"
using namespace std;

struct node{
	Stack data;
	node *next;
};

void push(int data,node* root){
	node* temp = root;
	while(temp->next != nullptr){
		temp = temp->next;
	}
	if(temp->limit != 0){
		temp->data.push(i);
		temp->limit--;
	}
	else{
		temp->next = new node;
		temp = temp->next;
		temp->limit = 10;
		temp->next = nullptr;
		temp->data.push(i);
		temp->limit--;
	}
}

void pop(node* root){
	while(temp->next != nullptr){
		temp = temp->next;
	}
	cout<<temp->data.top()<<endl;
	temp->data.pop();
	temp->limit++;
	cout<<"limit = "<<temp->limit<<endl;
	if(temp->limit == 10){
		temp = nullptr;
		temp = root;
		while(temp->next != nullptr){
			temp = temp->next;
		}
	}
}
int main() {
	node *root;
	root = new node;
	root->next = nullptr;
	for(int i=0;i<20;i++){
		push(i,root);
	}
	for(int i=0;i<20;i++){
		pop(root);
	}
}
