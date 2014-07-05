/*#include<iostream>
using namespace std;

struct node{
    int data;
    node* next;
};

node* partition(node* root,int x){
    node *temp = root;
    node *new_root = NULL;
    node *temp_new_root = NULL;
    node *new_root1 = NULL;
    node *temp_new_root1 = NULL;
    while(temp!=NULL){
        if(temp->data < x){
            if(new_root == NULL){
                new_root = temp;
                temp_new_root = new_root;
            }
            else{
                new_root->next = temp;
                new_root = new_root ->next;
            }
        }
        else{
            if(new_root1 == NULL){
                new_root1 = temp;
                temp_new_root1 = new_root1;
            }
            else{
                new_root1->next = temp;
                new_root1 = new_root1->next;
            }
        }
        temp=temp->next;
    }
    new_root->next = NULL;
    new_root1->next = NULL;
    temp = temp_new_root;
    while(temp!=NULL){
        cout<<temp->data<<endl;
        temp = temp->next;
    }


    new_root->next = temp_new_root1;

    cout<<endl;
    root = temp_new_root;
    temp = root;
    while(temp!=NULL){
        cout<<temp->data<<endl;
        temp = temp->next;
    }
    return temp_new_root;
}

int main(){
    node *root;
    node *temp;
    root = new node;
    root->data = 3;
    root->next = new node;
    root->next->data = 2;
    root->next->next = new node;
    root->next->next->data = 1;
    root = partition(root,2);
    cout<<endl;
    temp = root;
    while(temp!=NULL){
        cout<<temp->data<<endl;
        temp = temp->next;
    }
}*/
