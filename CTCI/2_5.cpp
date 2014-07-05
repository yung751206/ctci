/*#include<iostream>
using namespace std;

struct node{
	int data;
	node* next;
};

node* addList(node* list1,node* list2){
	int addResult = 0;
	int i=1;
	node* result = NULL;
	node* resultHead;
	while(list1!=NULL){
		addResult += i*list1->data;
		list1 = list1->next;
		i = i*10;
	}
	i=1;
	while(list2!=NULL){
		addResult += i*list2->data;
		list2 = list2->next;
		i = i*10;
	}
	while(addResult > 0){
		if(result==NULL){
			result = new node;
			result->data = addResult%10;
			resultHead = result;
		}
		else{
			result->next = new node;
			result->next->data = addResult%10;
			result = result->next;
		}
		addResult = addResult/10;
	}

	return resultHead;
}
int main(){
    node *list1;
    node *list2;

    list1 = new node;
    list1->data = 7;
    list1->next = new node;
    list1->next->data = 1;
    list1->next->next = new node;
    list1->next->next->data = 6;

    list2 = new node;
    list2->data = 5;
    list2->next = new node;
    list2->next->data = 9;
    list2->next->next = new node;
    list2->next->next->data = 2;
    node* result = addList(list1,list2);
    while(result!=NULL){
    	cout<<result->data<<endl;
    	result = result->next;
    }

	return 0;
}*/
