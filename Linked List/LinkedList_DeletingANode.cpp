#include <bits/stdc++.h>
using namespace std;

struct Node {
	int data;
	struct Node * next;
};

// Adding Node in front of the List
void push(struct Node ** headRef, int newData) {

	struct Node * newNode = (struct Node *)malloc(sizeof(struct Node));
	newNode->data = newData;
	newNode->next = (*headRef);
	(*headRef) = newNode;
}

void deleteNode(struct Node ** headRef, int key) {

	struct Node * temp = (*headRef), (*prev);

	if( temp != NULL && temp->data == key) {
		*headRef = temp->next;
		free(temp);
		return;
	}

	while(temp != NULL && temp->data != key) {
		prev = temp;
		temp = temp->next;
	}

	if(temp == NULL) {
		return;
	}

	prev->next = temp->next;	// unlink the node from the Linked List

	free(temp);	// Free Memory
}

void printList(struct Node *node)
{
    while (node != NULL)
    {
        printf(" %d ", node->data);
        node = node->next;
    }
}

int main()
{
    /* Start with the empty list */
    struct Node* head = NULL;
 
    push(&head, 7);
    push(&head, 1);
    push(&head, 3);
    push(&head, 2);
 
    puts("Created Linked List: ");
    printList(head);
    deleteNode(&head, 1);
    puts("\nLinked List after Deletion of 1: ");
    printList(head);
    cout << "\n";

    return 0;

}