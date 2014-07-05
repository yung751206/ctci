/*#include<iostream>
#include<string>
using namespace std;

struct node{
	char data;
	node* next;
	node* prev;
};

void generateData(node* root,char *data,size_t size){
	node* temp;
	temp = root;
	for(size_t i=0;i<size;i++){
		temp->data = data[i];
		temp->next = new node;
		temp->next->prev = temp;
		temp = temp->next;
	}
}

void deleteNode(node* n){
	n->next->prev = n->prev;
	n->prev->next = n->next;
	delete n;
}
void eliminateDuplicates(node* root){
	string s1;
	node *temp=root;
	while(temp!=NULL){
		s1 += temp->data;
		temp = temp->next;
		for(int i = s1.length()-2;i>=0;i--){
			if(s1[s1.length()-1] == s1[i]){
				deleteNode(temp->prev);
			}
		}
	}
}

void traverseList(node* root){
	node* temp=root;
	while(temp!=NULL){
		cout<<temp->data;
		temp=temp->next;
	}
}
int main(){
	node *root;
	char data[]="FOLLOW UP";
	root = new node;
	root->prev = NULL;
	generateData(root,data,9);
	//deleteNode(root->next);
	//traverseList(root);
	eliminateDuplicates(root);
	traverseList(root);
	return 0;
}*/
