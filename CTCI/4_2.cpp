//
//  4_2.cpp
//  CTCI
//
//  Created by Edison on 8/15/14.
//  Copyright (c) 2014 Edison. All rights reserved.
//

#include "4_2.h"
#include <iostream>
#include <stack>
using namespace std;

graph::graph(int numNode){
    graphList = new std::list<int>[numNode];
}

void graph::connect(int from,int to){
    graphList[from].push_back(to);
}

void graph::traversal(){
    list<int>::iterator it;
    for(int i=0;i<5;i++){
        it = graphList[i].begin();
        cout<<"List "<<i<<" contains ";
        while(it != graphList[i].end()){
            cout<<","<<*it;
            it++;
        }
        cout<<endl;
    }
}

bool graph::path(int from,int to){
    stack<int> stackData;
    stackData.push(from);
    bool visited[5];
    
    for(int i=0;i<5;i++){
        visited[i] = false;
    }
    while(!stackData.empty()){
        int data = stackData.top();
        stackData.pop();
        if(data == to){
            return true;
        }
        visited[data] = true;
        list<int>::iterator it;
        it = graphList[data].begin();
        while(it != graphList[data].end()){
            if(visited[*it] == false){
                stackData.push(*it);
            }
            it++;
        }
    }
    return false;
}


