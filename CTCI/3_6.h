#include<stack>

class sortStack{
public:
	sortStack();
	void push(int data);
	void pop();
	int top();
	bool isEmpty();
	
private:
	std::stack<int> ascendingStack;
	std::stack<int> descendingStack;
};