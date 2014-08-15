//
//  testClass.cpp
//  CTCI
//
//  Created by Edison on 7/19/14.
//  Copyright (c) 2014 Edison. All rights reserved.
//

#include "testClass.h"

student::student(){
    m_weight = 10;
}

student::student(float weight){
    m_weight = weight;
}

float student::getweight() const{
    return m_weight;
}

bool student::operator>=(const student &other){
    if (m_weight >= other.getweight())
        return true;
    else
        return false;
}