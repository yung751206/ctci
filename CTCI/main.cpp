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
    stackMin stack;
    stack.push(5);
    stack.push(6);
    stack.push(3);
    stack.push(7);
    cout<<stack.min()<<endl;
    stack.pop();
    stack.pop();
    cout<<stack.min()<<endl;
    stack.pop();
    cout<<stack.min()<<endl;
}

