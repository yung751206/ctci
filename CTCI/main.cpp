//
//  main.cpp
//  CTCI
//
//  Created by Edison on 6/24/14.
//  Copyright (c) 2014 Edison. All rights reserved.
//

#include <iostream>
#include "3_5.h"
using namespace std;

int main(int argc, const char * argv[])
{
    myQueue q1;
    for(int i=0;i<5;i++)
        q1.enQueue(i);

    for(int i=0;i<5;i++){
        cout<<q1.first()<<endl;
        q1.deQueue();
    }

    for(int i=0;i<5;i++)
        q1.enQueue(i);
    
    for(int i=0;i<5;i++){
        cout<<q1.first()<<endl;
        q1.deQueue();
    }
}

