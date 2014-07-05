/*//
//  1_4.cpp
//  Test
//
//  Created by Edison on 6/24/14.
//
//

#include <iostream>
#include <string>
using namespace std;

void replaceBlank(string &s){
    string temp;
    for(int i=0;i<s.length();i++){
        if(s[i]==' '){
            temp += "%20";
        }
        else
            temp += s[i];
    }
    s = temp;
}

int main(int argc,char** argv){
    string s ="hello world ";
    replaceBlank(s);
    cout<<s<<endl;
    return 0;
}*/
