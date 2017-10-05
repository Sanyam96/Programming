// Simple Linked List

#include <bits/stdc++.h>
using namespace std;

class Node {
public:
	int data;
	Node * next;

	// Constructor
	Node( int data ) {
		this->data = data;
		next = NULL;
	}
};

void print(Node * head) {
	while( head != NULL) {
		cout << head->data << " ->";
		head = head -> next;
	}
}


/*
class Node {
public:
	int data;
	Node * next;
};

void print( Node * head) {
	while( head != NULL) {
		cout << head -> data << " --> ";
		head = head -> next;
	}
}

int main(int argc, char const *argv[]) {
	
	Node * head = NULL;
	Node * second = NULL;
	Node * third = NULL;	

	head = new Node;
	second = new Node;
	third = new Node;

	head -> data = 1;
	head -> next = second;

	second -> data = 2;
	second -> next = third;

	third -> data = 3;
	third -> next = NULL;

	print(head);
	cout << "\n";

	return 0;
}
*/

/*
struct Node {

	int data;
  	struct Node *next;	
};


int main() {


	struct Node* head = NULL;
	struct Node* second = NULL;
	struct Node* third = NULL;

	// allocate 3 nodes in the heap  
	head = (struct Node*)malloc(sizeof(struct Node));	// head = new Node;
	second = (struct Node*)malloc(sizeof(struct Node));
	third = (struct Node*)malloc(sizeof(struct Node));

	head->data = 1; //assign data in first node
	head->next = second; // Link first node with the second node

	second->data = 2; 
	second->next = third;

	third->data = 3; 
	third->next = NULL;

    return 0;
}
*/