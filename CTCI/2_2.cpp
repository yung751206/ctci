/*#include<iostream>
using namespace std;

struct node{
	char data;
	node* next;
};

void generateData(node* root,char *data,size_t size){
	node* temp;
	temp = root;
	for(size_t i=0;i<size;i++){
		temp->data = data[i];
		temp->next = new node;
		temp = temp->next;
	}
}

node* accessNode(node* n,int ith){
	node* temp = n;
	int index = 0;
	while(temp!=NULL){
		index++;
		temp = temp->next;
	}
	index--;
	temp = n;
	for(int i = index - 1 - ith;i>0;i--){
		temp =temp->next;
	}
	return temp;
}
int main(){
	node *root;
	char data[]="FOLLOW UP";
	root = new node;
	generateData(root,data,9);
	node * temp = accessNode(root,3);
	cout<<temp->data<<endl;
	return 0;
}*/
