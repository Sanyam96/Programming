// Implementation of Stack using Arrays!!
/*
	Stack is a linear data structure which follows a particular order in which the operations are performed. 
	The order may be LIFO(Last In First Out) or FILO(First In Last Out).

	There are mainly 3 operations of Stack i.e., 
		1. POP 
		2. PUSH
		3. isEmpty
*/


#include <bits/stdc++.h>
using namespace std;
#define MAX 1000

class Stack{
	int top;
	public :
		int a[MAX];

		Stack() {
			top = -1;
		}
		bool push(int x);
		int pop();
		bool isEmpty();
};

bool Stack::push(int x) {
	if( top >= MAX) {
		cout << "Stack is full!!";
		return false;
	}
	else {
		a[++top] = x;
		return true;
	}
}

int Stack::pop() {
	if( top < 0) {
		cout << "Stack underflow!!";
		return 0;
	}
	else {
		int x = a[top];
		top--;
		return x;
	}
}

bool Stack::isEmpty() {
	return (top < 0);
}

int main() {

	Stack s;
    s.push(10);
    s.push(20);
    s.push(30);

    cout << s.pop() << endl;
    cout << s.pop() << endl;
    cout << s.isEmpty() << endl;
    cout << s.pop() << endl;	
    cout << s.pop() << endl;
    return 0;
}
