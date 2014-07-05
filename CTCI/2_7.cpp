#include<iostream>
#include<string>
using namespace std;

struct node{
	char data;
	node* next;
};

bool detectPalindrome(node* root){
	string data;
	node *temp = root;
	while(temp!=NULL){
		data += temp->data;
		temp = temp->next;
	}
	for(unsigned int i=0;i<data.length()/2+1;i++){
		if(data[i]!=data[data.length()-i-1]){
			return false;
		}
	}
	return true;
}

int main(){
	node *root;
	root = new node;
	root->data ='a';
	root->next = new node;
	root->next->data = 'a';
	root->next->next = new node;
	root->next->next->data = 'd';
	root->next->next->next = new node;
	root->next->next->next->data ='a';
	root->next->next->next->next = new node;
	root->next->next->next->next->data ='a';
	cout<<detectPalindrome(root)<<endl;
}
