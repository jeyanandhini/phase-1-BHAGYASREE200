#include<stdio.h>
#include<stdlib.h>

struct node
{
	int  data ;
	struct node*next;
};


void insertLast(struct node **head, int val)
{
    struct node *newNode = malloc(sizeof(struct node));
    newNode->data = val;
    newNode->next = NULL;

    if(*head == NULL)
         *head = newNode;
    else
    {
        struct node *lastNode = *head;

        while(lastNode->next != NULL)
        {
            lastNode = lastNode->next;
		}
        lastNode->next = newNode;
    }

}

void printlist(struct node*n)
{
	while(n != NULL)
	{
		printf("%d\n",n->data);
		n = n->next;
	}
}
void main()
{
	
  struct node* head;
  struct node* temp;
  temp = (struct node*)malloc(sizeof( struct node));
  temp-> data = 98;
  temp-> next = NULL;
  head = temp;
  struct node* temp1;
  temp1 = (struct node*)malloc(sizeof( struct node));
  temp1-> data = 99;
  temp1-> next = NULL;
  temp->next=temp1;
  struct node*temp2;
  temp2 = (struct node*)malloc(sizeof( struct node));
  temp2-> data = 100;
  temp2-> next = NULL;
  temp1->next=temp2;

  insertLast ( &head,90);
  printlist(head);
}

//output
98
99
100
90

--------------------------------
Process exited after 0.05524 seconds with return value 0
Press any key to continue . . .
