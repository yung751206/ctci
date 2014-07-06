//
//  3_2.cpp
//  CTCI
//
//  Created by Edison on 7/6/14.
//  Copyright (c) 2014 Edison. All rights reserved.
//

#include "3_2.h"
#include <iostream>

using namespace std;

minStack::minStack(){
    m_size = 0;
    m_index = 0;
}

void minStack::pop(){
    if(m_size == 0)
        ;
    else{
        m_size--;
        m_index--;
    }
}

void minStack::push(int data){
    if(m_size == 0){
        m_array[m_index] = data;
        m_size++;
    }
    else{
        if(data <= m_array[m_index]){
            m_index++;
            m_size++;
            m_array[m_index] = data;
        }
        else{
            int temp = m_array[m_index];
            m_array[m_index] = data;
            m_index++;
            m_size++;
            m_array[m_index] = temp;
        }
    }
}

int minStack::min(){
    return m_array[m_index];
}

