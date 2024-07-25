// Example_stackAsArray.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Stack.h"
using namespace std; 
int main()
{
	try {
		Stack st1(5);

		st1.push(1);
		st1.push(2);
		st1.push(3);
		st1.push(4);
		//st1.push(5);
		//st1.pop();
		//st1.push(6);

		int sum = 0;
		while (!st1.isEmpty())
		{
			sum += st1.pop();

		}
		cout << sum << endl;
		//// print all elements of the stack
		//while (!st1.isEmpty())
		//{
		//	cout << st1.pop() << endl;
		//}

		// print all elements of the stack without losing the elements 
		/*Stack temp(5);
		int element;
		while (!st1.isEmpty())
		{
			element = st1.pop();
			temp.push(element);
			cout <<  element<< endl;
		}*/

		// put the elements back into the stack
		/*while (!temp.isEmpty())
		{
			st1.push(temp.pop());
		}*/

		// Question: how can we create a duplicate of a stack? 


	}

	catch (int ex)
	{
		switch (ex)
		{
		case 1:
			cout << "Stack Overflow!\n";
			break;
		case 2:
			cout << "Stack Underflow!\n";
			break;
		}

	}

}

