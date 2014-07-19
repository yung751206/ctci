//
//  13_1.cpp
//  CTCI
//
//  Created by Edison on 7/19/14.
//  Copyright (c) 2014 Edison. All rights reserved.
//

#include "13_1.h"
#include <iostream>

using namespace std;

readFile::readFile(){
    file.open("test.txt");
    if(file){
        for(int i=0;i<50;i++){
            file<<i<<endl;
        }
    }
    else{
        cout<<"Fail to open a file"<<endl;
    }
    output.open("test.txt");
    if(output)
        cout<<"Successfully open a file"<<endl;
    else
        cout<<"Fail to read a file"<<endl;
}

readFile::~readFile(){
    file.close();
    output.close();
}

void readFile::outputLastKLines(int k){
    string s;
    while(output){
        getline(output,s);
        if(outputLines.size()==k+1){
            outputLines.pop();
            outputLines.push(s);
        }
        else{
            outputLines.push(s);
        }
    }
    for(int i=0;i<k;i++){
        cout<<"test "<<outputLines.front()<<endl;;
        outputLines.pop();
        
    }
}