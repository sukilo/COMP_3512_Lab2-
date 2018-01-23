class Stack{

constexpr int MAX_SIZE{10};

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




};