// Simple Linked List

#include <bits/stdc++.h>
using namespace std;

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