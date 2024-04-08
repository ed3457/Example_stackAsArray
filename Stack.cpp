#include "Stack.h"

int Stack::pop()
{
	if (isEmpty())
		throw 2;// underflow exception 
	topIndex--;
	return data[topIndex] ;
}

void Stack::push(int element)
{
	if (isFull())
		throw 1; // overflow exception 
	data[topIndex] = element;
	topIndex++;
}

int Stack::top()
{
	return data[topIndex-1];
}

Stack::Stack():Stack(100)
{
	/*data = new int[100];
	initStack();*/
}

Stack::Stack(int maxSize)
{
	data = new int[maxSize];
	this->maxSize = maxSize;
	initStack();
}

bool Stack::isEmpty()
{
	return (topIndex==0);
}

bool Stack::isFull()
{
	return (topIndex == maxSize);
}

void Stack::initStack()
{
	topIndex = 0;

}
