#include <iostream>

using namespace std;

class Stack{
	static constexpr int SIZE = 10;

private:
	int array [SIZE];
	int top;

public:
	//Default Constructor
	Stack() {
		top = -1; 
	}

	void push(int val);

	void pop();

	int top_fn() const;

	bool empty() const;

	bool full() const;

	void print() const;
};