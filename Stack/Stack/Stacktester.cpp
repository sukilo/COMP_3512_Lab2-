#include "Stack.h"

using namespace std;

int main()
{
	Stack s;

	cout << "Top of the array is: " << s.top_fn() << endl;
	
	cout <<"Stack is full: "<< ((s.full()) ? "YES" : "NO") << endl;
	cout <<"Stack is empty: "<< ((s.empty()) ? "YES" : "NO") << endl;

	s.push(1);
	s.push(2);
	s.push(3);
	
	cout << "Now the top is: " << s.top_fn() << endl; 
	cout << "Stack is full: " << ((s.full()) ? "YES" : "NO") << endl;
	cout << "Stack is empty: " << ((s.empty()) ? "YES" : "NO") << endl;

	s.pop();

	cout << "After popping, Stack: " << endl;
	s.print();
	cout << endl;

	system("pause");
	return 0;
}