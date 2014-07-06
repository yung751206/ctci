//
//  main.cpp
//  CTCI
//
//  Created by Edison on 6/24/14.
//  Copyright (c) 2014 Edison. All rights reserved.
//

#include <iostream>
#include "3_2.h"
using namespace std;
int main(int argc, const char * argv[])
{
    minStack stack;
    for(int i=0;i<50;i++){
        stack.push(i);
    }
    for(int i=0;i<1;i++){
        stack.pop();
    }
    cout<<stack.min()<<endl;
}

