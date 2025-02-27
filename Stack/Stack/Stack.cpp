#include "Stack.h"
#include <iostream>

using namespace std;

void Stack::push(int val){
	if (!full()) {
		++top;
		array[top] = val;
	}
}

void Stack::pop(){
	if (!empty()) {
		--top;
	}
}

int Stack::top_fn() const {
	return array[top];
}

bool Stack::empty() const {
	if (top == -1){
		return true;
	}else{
		return false;
	}
}

bool Stack::full() const {
	if (top == (SIZE - 1)){
		return true;
	}else{
		return false;
	}
}

void Stack::print() const{
	for (int i = 0; i < top + 1 ; ++i){
		cout << array[i];
	}
}