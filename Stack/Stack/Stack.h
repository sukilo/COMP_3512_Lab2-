#include <iostream>
using namespace std;

class Stack{

	constexpr int size = 10; 

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
		if (top == size) {
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
			pop;
		}
		else {
			std::cout << "N/A" << std::endl;
		}
	}

};