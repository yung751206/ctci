//
//  linkedlist.cpp
//  CTCI
//
//  Created by Edison on 6/29/14.
//  Copyright (c) 2014 Edison. All rights reserved.
//

#include "linkedlist.h"

int linkedlist:: getData(){
    return m_data;
}

void linkedlist::setData(int data){
    m_data = data;
}
linkedlist* linkedlist:: getRoot(){
    return m_root;
}


