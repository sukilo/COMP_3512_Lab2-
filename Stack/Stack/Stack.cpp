#include "Stack.h"
#include <iostream>
using namespace std;

int main()
{
	Stack stack1;

	for (int i = 1; i < SIZE; i++) {
		if (!stack1.full()) {
			stack1.push(i);
		}
		else {
		std::cout << "stack is full" << std::endl;
		}
	}

	stack1.print();

    return 0;
}