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

	    int size() {
	    	Node * temp = head;
	    	int counter = 0;
	    	while(temp != NULL) {
	    		counter++;
	    		temp = temp -> next;
	    	}
	    	return counter;
	    }

	    bool isEmpty() {
	    	if( head == NULL ) {
	    		return true;
	    	}
	    	else {
	    		return false;
	    	}
	    }

	    int top() {
	    	Node * temp = head;
	    	if( head == NULL) {
	    		cout << "Stack is Empty\n";
	    		return 0;
	    	}
	    	else {
		    	return temp -> data;
	    	}
	    }


	    /*
	    // accessor methods
	    int size();
	    bool isEmpty();
	    int top();

	    // update methods
	    void push(int elements);
	    int pop();
	    */
};

int main() {

	Stack s;
    s.push(10);
    s.push(20);
    cout << s.top() << endl;
    s.push(30);
    cout << s.size() << endl;
    cout << s.isEmpty() << endl;
    cout << s.top() << endl;

    s.print();

    s.pop();
    s.pop();
    cout << s.isEmpty() << endl;
    cout << s.top() << endl;
    s.pop();
    cout << s.isEmpty() << endl;
    s.pop();
    cout << s.top() << endl;
    cout << s.isEmpty() << endl;
    return 0;
}
