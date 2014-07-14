#include "3_6.h"
#include <iostream>

sortStack::sortStack(){

}

void sortStack::push(int data){
	if (ascendingStack.empty()){
		ascendingStack.push(data);
	}
	else{
		if (ascendingStack.top() > data ){
			while (ascendingStack.top() > data ){
				descendingStack.push(ascendingStack.top());
				ascendingStack.pop();
				if (ascendingStack.empty()){
					break;
				}
			}
			descendingStack.push(data);
			while ( !ascendingStack.empty() ){
				descendingStack.push(ascendingStack.top());
				ascendingStack.pop();
			}
			while (!descendingStack.empty()){
				ascendingStack.push(descendingStack.top());
				descendingStack.pop();
			}
		}
		else{
			ascendingStack.push(data);
		}
	}
}

void sortStack::pop(){
	ascendingStack.pop();
}

int sortStack::top(){
	return ascendingStack.top();
}

bool sortStack::isEmpty(){
	return ascendingStack.empty();
}