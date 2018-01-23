//#include<iomanip>

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

	bool empty() {
		if (top == -1) {
			return true;
		}
		else {
			return false;
		}
	}



};