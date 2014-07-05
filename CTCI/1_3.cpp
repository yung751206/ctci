/*#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

bool isPermutation(string s,string t){
	if(s.length()!=t.length())
		return false;
    sort(s.begin(),s.end());
    sort(t.begin(),t.end());
    if(s.compare(t)==0)
        return true;
    else
        return false;
    
}
int main(){
    cout<<isPermutation("abc","cb a")<<endl;;
    return 0;
}*/
