#ifndef STACK_H_
#define STACK_H_
#include <iostream>
using namespace std;
constexpr int SIZE = 10;

class Stack{

private:
	int array [10];
	int top;

public:
	//Default Constructor
	Stack() {
		top = -1; 
	}

	void push(int value) {
		array[top + 1] = value;
		top++; 
	}

	void pop() {
		top--;
	}

	int top_fn() const {
		return array[top];
	}

	bool empty() const {
		if (top == -1) {
			return true;
		}
		else {
			return false;
		}
	}

	bool full() const {
		if (top == SIZE) {
			return true;
		}
		else {
			return false;
		}
	}

	void print() const {
		std::cout << "Contents of the Stack:" << std::endl;
		if (!empty()) {
			std::cout << top_fn() << std::endl;
		}
		else {
			std::cout << "N/A" << std::endl;
		}
	}
};
#endif