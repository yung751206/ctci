#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include "File.h"

using namespace std;
struct PersonInfo{
    string name;
    vector<string> phones;
};

int main (int argc,char **argv)
{
    wow wowClass;
    cout<<wowClass.getA()<<endl;
}