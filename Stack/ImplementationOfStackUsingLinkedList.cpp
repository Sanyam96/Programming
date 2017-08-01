// Implementation of Stack using Linked List!!
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

class Node {

	public:
		int data;
		Node * next;

		Node(int d) {
		    data = d;
		    next = NULL;
		}
};

class Stack {

	public:

	    Node * head = NULL;

	    void push(int element) {
	        Node * node = new Node(element);
	        if(head == NULL) {
	            head = node;
	            head -> next = NULL;
	        }
	        else {
	            node -> next = head;
	            head = node;
	        }
	    }

	    int pop() {
	        if(head == NULL) {
	            cout << "Stack Empty!!" << endl;
	            return 0;
	        }
	        Node * temp = head;
	        head = head -> next;
	        cout << "Popped data : " << temp -> data << endl;
	    }

	    void print() {
	        Node * temp = head;
	        while( temp != NULL) {
	            cout << temp -> data << "-->";
	            temp = temp -> next;
	        }
	        cout << endl;
	    }
};

int main() {
	
	Stack s;
    s.push(10);
    s.push(20);
    s.push(30);

    s.print();

    s.pop();
    s.pop();
    s.pop();
    s.pop();
    return 0;
}
