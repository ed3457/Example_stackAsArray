#include "Stack.h"

Stack::Stack():Stack(100)
{
	/*data = new int[100];
	initStack();*/
}

Stack::Stack(int maxSize)
{
	data = new int[maxSize];
	initStack();
}

void Stack::initStack()
{
	topIndex = 0;

}
