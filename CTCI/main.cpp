
#include "4_2.h"
#include "4_1.h"
#include <iostream>
#include <list>
using namespace std;
int main ()
{
    tree t1;
    t1.root = new node;
    t1.root->left = new node;
    t1.root->right = new node;
    t1.root->left->right = new node;
    t1.root->left->left = new node;
    t1.root->left->right->right = new node;
    
    t1.root->right->right = new node;
    t1.root->right->left = new node;
    t1.root->right->left->left = new node;
    t1.root->right->left->right = new node;
    t1.root->right->left->right->left = new node;
    cout<<t1.isBalance(t1.root)<<endl;
//    graph testGraph(5);
//    testGraph.connect(0,1);
//    testGraph.connect(1,2);
//    testGraph.connect(2,3);
//    testGraph.connect(3,4);
////    testGraph.connect(4,1);
//    testGraph.traversal();
//    int i = 3;
//    int j = 1;
//    if(testGraph.path(i,j))
//        cout<<"There is a path between "<<i<<" and "<<j<<endl;
//    else
//        cout<<"Cannot find the path between "<<i<<" and "<<j<<endl;
}