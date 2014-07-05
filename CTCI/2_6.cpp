/*#include<iostream>
using namespace std;

struct node{
	int data;
	node* next;
};

node* findLoopStart(node* root){
	node* oneStep = root->next;
	node* twoStep = root->next->next;
	while(oneStep != twoStep){
		oneStep = oneStep->next;
		twoStep = twoStep->next->next;
	}
	int i=1;
	oneStep = oneStep->next;
	while(oneStep != twoStep){
		oneStep = oneStep->next;
		i++;
	}
	oneStep = root;
	twoStep = root;
	while(i>0){
		oneStep = oneStep->next;
		i--;
	}
	while(oneStep!=twoStep){
		oneStep = oneStep->next;
		twoStep = twoStep->next;
	}
	return oneStep;
}

int main(){
	node *root;
	root = new node;
	root->data = 1;
	root->next = new node;
	root->next->data = 2;
	root->next->next = new node;
	root->next->next->data = 3;
	root->next->next->next = new node;
	root->next->next->next->data = 4;
	root->next->next->next->next = new node;
	root->next->next->next->next->data = 5;
	root->next->next->next->next->next = root->next->next;
	node *loopStart = findLoopStart(root);
	int i=0;
	node *temp = loopStart;
	while(i<11){
		cout<<temp->data<<endl;
		temp = temp->next;
		i++;
	}

}*/
