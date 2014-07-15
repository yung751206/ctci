//
//  main.cpp
//  CTCI
//
//  Created by Edison on 6/24/14.
//  Copyright (c) 2014 Edison. All rights reserved.
//

#include <iostream>
#include "3_7.h"
using namespace std;

int main(int argc, const char * argv[])
{
    animalQueue queue;
    node animal,animal2,animal3,animal4;
    animal.type = "cat";
    animal2.type = "cat";
    animal3.type = "dog";
    animal4.type = "dog";
    queue.enqueue(animal);
    queue.enqueue(animal2);
    queue.enqueue(animal3);
    queue.enqueue(animal4);
    node temp = queue.dequeueCat();
    cout<<temp.type<<endl;
    node temp2 = queue.dequeueCat();
    cout<<temp2.type<<endl;
    node temp3 = queue.dequeueDog();
    cout<<temp3.type<<endl;
    node temp4 = queue.dequeueDog();
    cout<<temp4.type<<endl;
}

