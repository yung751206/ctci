/*#include<iostream>
#include<string>
#include<sstream>
using namespace std;

void compressString(string &s){
	int count=1;
	string temp;
	ostringstream convert;
	for(int i=0;i<s.length();i++){
		if(s[i]!=s[i+1]){
			convert<<count;
			temp += s[i] + convert.str();
			convert.str("");
			convert.clear();
			count =1;
		}
		else{
			count++;
		}
	}
	if(temp.length()<s.length())
		s=temp;
}
int main(){
	string s="aabcccccd";
	compressString(s);
	cout<<s<<endl;
	return 0;
}*/

