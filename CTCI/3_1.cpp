//
//  3_1.cpp
//  CTCI
//
//  Created by Edison on 7/6/14.
//  Copyright (c) 2014 Edison. All rights reserved.
//

#include "3_1.h"
#include <iostream>

using namespace std;

threeStacks::threeStacks(){
    m_size = 99;
    m_indexOne = 0;
    m_indexTwo = m_size/3;
    m_indexThree = (m_size/3)*2;
    numOne = numTwo = numThree = 0;
}

void threeStacks::push(int index,int data){
    if(index == 1){
        m_array[m_indexOne] = data;
        m_indexOne++;
        numOne++;
    }
    else if(index == 2){
        m_array[m_indexTwo] = data;
        m_indexTwo++;
        numTwo++;
    }
    else{
        m_array[m_indexThree] = data;
        m_indexThree++;
        numThree++;
    }
}

void threeStacks::pop(int index){
    if(index == 1){
        m_indexOne--;
        numOne--;
    }
    else if(index == 2){
        m_indexTwo--;
        numTwo--;
    }
    else{
        m_indexThree--;
        numThree--;
    }
}

int threeStacks::top(int index){
    if(index == 1){
        return m_array[m_indexOne-1];
    }
    else if(index == 2){
        return m_array[m_indexTwo-1];
    }
    else{
        return m_array[m_indexThree-1];
    }
}



















