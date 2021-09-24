#include <stdio.h>
#include <stdlib.h>
 
struct Node 
{
    int data;
    struct Node* next;
};
 
 void reverse(struct Node** head)
{
    struct Node* left = NULL;
    struct Node* current = *head;
    struct Node* right = NULL;
    while (current != NULL)
	 {
        
        right = current->next;
 
        
        current->next = left;
 
       
        left = current;
        current = right;
    }
    *head = left;
}
 

void push(struct Node** head, int new_data)
{
    struct Node* new_node
        = (struct Node*)malloc(sizeof(struct Node));
    new_node->data = new_data;
    new_node->next = (*head);
    (*head) = new_node;
}
 

void printList(struct Node* head)
{
    struct Node* temp = head;
    while (temp != NULL) {
        printf("%d  ", temp->data);
        temp = temp->next;
    }
}
 

int main()
{
    
    struct Node* head = NULL;
 
    push(&head, 9);
    push(&head, 19);
    push(&head, 29);
    push(&head, 39);
    push(&head, 49);
    push(&head, 59);
    
 
    printf("Given linked list\n");
    printList(head);
    reverse(&head);
    printf("\nReversed Linked list \n");
    printList(head);
    return 0;
}
//output
Given linked list
59  49  39  29  19  9
Reversed Linked list
9  19  29  39  49  59
