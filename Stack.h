#pragma once
class Stack
{
private: 
	int topIndex;
	int maxSize;
	int* data;
public:
	int pop();
	void push(int element);
	int top();
	Stack();
	Stack(int maxSize);
	bool isEmpty();
	bool isFull();
	void initStack();


};

