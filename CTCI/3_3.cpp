//
//  3_2.cpp
//  CTCI
//
//  Created by Edison on 7/6/14.
//  Copyright (c) 2014 Edison. All rights reserved.
//

#include "3_3.h"
#include <iostream>

using namespace std;

Stack::Stack(){
    m_size = 0;
    m_index = 0;
    limit = 10;
    m_array = new int[limit];
}

Stack::~Stack(){
	delete [] m_array;
}

void Stack::pop(){
    if(m_size == 0){
    	cout<<"The stack is empty"<<endl;
    }
    else{
        m_size--;
        m_index--;
    }
}

void Stack::push(int data){
    if(m_size == 0){
        m_array[m_index] = data;
        m_size++;
    }
    else if(m_size == limit){
    	cout<<"The stack is full"<<endl;
    }
    else{
        m_index++;
        m_size++;
        m_array[m_index] = data;
    }
}

int Stack::top(){
	if(m_size ==0)
		return -1;
	else
		return m_array[m_index];
}

int Stack::size(){
    return m_size;
}



void push(int data,node* root){
	node* temp = root;
	while(temp->next != nullptr){
		temp = temp->next;
	}
	if( temp->data.size() < 10){
		temp->data.push(data);
	}
	else{
		temp->next = new node;
		temp = temp->next;
		temp->next = nullptr;
		temp->data.push(data);
	}
}

void pop(node* root){
    node* temp = root;
	while(temp->next != nullptr){
		temp = temp->next;
	}
    if(temp->data.size()!=0){
        cout<<temp->data.top()<<endl;
        temp->data.pop();
    }
	else{
        node* temp2 = root;
        while(temp2->next != temp){
            temp2 = temp2->next;
        }
        delete temp2->next;
        temp2->next = nullptr;
        cout<<temp2->data.top()<<endl;
        temp2->data.pop();
	}
}














