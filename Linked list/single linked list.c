#include <stdio.h>
#include <stdlib.h>
 
struct Node
{
    int data;
    struct Node* next;
};
 
int print(struct Node* n)
{
    while (n != NULL) 
	{
        printf(" %d ", n->data);
        n = n->next;
    }
}
 
int main()
{
  struct Node* head;
	struct Node* temp;
	temp = (struct Node*)malloc(sizeof(struct Node));
	temp-> data = 10;
	temp-> next = NULL;
	head = temp;
	struct Node* temp1;
	temp1 = (struct Node*)malloc(sizeof(struct Node));
	temp1-> data = 11;
	temp1-> next = NULL;
  temp->next=temp1;
 
  print(head);
 
    return 0;
}
