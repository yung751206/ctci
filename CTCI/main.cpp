//
//  main.cpp
//  CTCI
//
//  Created by Edison on 6/24/14.
//  Copyright (c) 2014 Edison. All rights reserved.
//

#include <iostream>
#include "3_6.h"
using namespace std;

int main(int argc, const char * argv[])
{
	sortStack s1;
	s1.push(6);
	s1.push(1);
	s1.push(4);
	s1.push(2);
	s1.push(5);
	s1.push(3);
	for (int i = 0; i < 6; i++){
		cout << s1.top() << endl;
		s1.pop();
	}

}

