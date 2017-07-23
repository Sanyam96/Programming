// Linked List Inserting Node At The Front\

#include <bits/stdc++.h>
using namespace std;

struct Node {

	int data;
  	struct Node *next;	
};

void pushFront( struct Node **n, int newData ) {
	
	struct Node * newNode = (struct Node*)malloc(sizeof(struct Node));	// Allocate Node memory

	newNode->data = newData;	// copy data to new Node
	newNode->next = *n;			// Make next of new node as head
	*n = newNode;				// move the head to point to the new node
}

void printList(struct Node *n)
{
	while (n != NULL)
	{
		printf("%d ", n->data);
		n = n->next;
	}
	cout << endl;
}

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

	printList(head);

	pushFront(&head, 5);

	printList(head);	

    return 0;
}