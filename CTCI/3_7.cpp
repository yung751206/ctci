//
//  3_7.cpp
//  CTCI
//
//  Created by Edison on 7/15/14.
//  Copyright (c) 2014 Edison. All rights reserved.
//

#include "3_7.h"
animalQueue::animalQueue(){
    root = nullptr;
}

void animalQueue::enqueue(node animal){
    if(root == nullptr){
        root = new node;
        root->type = animal.type;
        root->next = nullptr;
    }
    else{
        node *temp = root;
        while(temp->next != nullptr){
            temp = temp->next;
        }
        temp->next = new node;
        temp->next->type = animal.type;
        temp->next->next = nullptr;
    }
}

node animalQueue::dequeue(){
    node temp;
    temp.type = root->type;
    temp.next = nullptr;
    node *killme = root;
    root = root->next;
    delete killme;
    return temp;
}

node animalQueue::dequeueDog(){
    node *temp = root;
    if(temp->type == "dog")
        return dequeue();
    while(temp->type != "dog" && temp->next != nullptr){
        temp= temp->next;
    }
    node *prev = root;
    while (prev->next != temp){
        prev = prev->next;
    }
    node animal;
    animal.type = temp->type;
    animal.next = nullptr;
    prev->next = temp->next;
    delete temp;
    return animal;
}

node animalQueue::dequeueCat(){
    node *temp = root;
    if(temp->type == "cat")
        return  dequeue();
    while(temp->type != "cat" && temp->next != nullptr){
        temp= temp->next;
    }
    node *prev = root;
    while (prev->next != temp){
        prev = prev->next;
    }
    node animal;
    animal.type = temp->type;
    animal.next = nullptr;
    prev->next = temp->next;
    delete temp;
    return animal;
}














