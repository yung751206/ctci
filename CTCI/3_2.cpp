/*//
//  3_2.cpp
//  CTCI
//
//  Created by Edison on 7/6/14.
//  Copyright (c) 2014 Edison. All rights reserved.
//

#include "3_2.h"
#include <iostream>

using namespace std;

Stack::Stack(){
    m_size = 0;
    m_index = 0;
}

void Stack::pop(){
    if(m_size == 0)
        ;
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
    else{
        m_index++;
        m_size++;
        m_array[m_index] = data;
    }
}

int Stack::top(){
    return m_array[m_index];
}

int Stack::size(){
    return m_size;
}

int stackMin::min(){
    return m_minStack.top();
}

void stackMin::pop(){
    if(top()==m_minStack.top()){
        m_minStack.pop();
        Stack::pop();
    }
    else{
        Stack::pop();
    }
}

void stackMin::push(int data){
    if(m_minStack.size() ==0){
        m_minStack.push(data);
        Stack::push(data);
    }
    else if(data <= m_minStack.top()){
        m_minStack.push(data);
        Stack::push(data);
    }
    else{
        Stack::push(data);
    }
}
*/















