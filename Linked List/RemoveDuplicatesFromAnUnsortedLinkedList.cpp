// Remove duplicates from an unsorted linked list
/*
Write a removeDuplicates() function which takes a list and deletes any duplicate nodes from the list. 
The list is not sorted.

For example if the linked list is 12->11->12->21->41->43->21 then removeDuplicates() 
should convert the list to 12->11->21->41->43.
*/

#include <bits/stdc++.h>
using namespace std;

struct Node {

	int data;
	struct Node * next;	
};

struct Node *newNode(int data) {

	Node *temp = new Node;
	temp->data = data;
	temp->next = NULL;
	return temp;	
}

void removeDuplicates(struct Node * start) {
	struct Node *ptr1, *ptr2, *dup;
	ptr1 = start;

	while( ptr1 != NULL && ptr1->next != NULL ) {

		ptr2 = ptr1;
		
		while( ptr2-> next != NULL) {
		
			if( ptr1->data == ptr2->next->data) {
				dup = ptr2->next;
				ptr2->next = ptr2->next->next;
				delete(dup);
			}
			else {
				ptr2 = ptr2->next;
			}
		}

		ptr1 = ptr1->next;
	} 
}

void printList(struct Node *node) {
    
    while (node != NULL) {

    	cout << node->data << " ";
        node = node->next;
    }
    cout << "\n";
}

int main() {

	 
	// The constructed linked list is:
    //  10->12->11->11->12->11->10

    struct Node *start = newNode(10);
    start->next = newNode(12);
    start->next->next = newNode(11);
    start->next->next->next = newNode(11);
    start->next->next->next->next = newNode(12);
    start->next->next->next->next->next = newNode(11);
    start->next->next->next->next->next->next = newNode(10);
 
 	cout << "Linked list before removing duplicates ";
    printList(start);
 
    removeDuplicates(start);
 
 	cout << "Linked list after removing duplicates ";
    printList(start);
 

    return 0;
}
