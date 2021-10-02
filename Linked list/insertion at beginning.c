#include<stdio.h>
#include<stdlib.h>

struct node
 {
	int  data ;
	struct node*next;
 };

void insertion(int num,struct node**head)
     {
	struct node* newnode;
	newnode=(struct node*)malloc(sizeof (struct node));
	newnode->data=num;
	newnode->next=*head;
	*head=newnode;
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

  insertion (90, &head);
  printlist(head);
}

//output 
90
98
99
100

--------------------------------
Process exited after 0.005921 seconds with return value 0
Press any key to continue . . .
	
	
	
	
---------------------------------------------------------------------------------------------------------------------------------------------------------------------------
	
#include<stdio.h>
#include<malloc.h>


struct node
{
	int data;
	struct node* next;
};
struct node* head=NULL;


struct node* getnewnode(int val)
{
	struct node* temp;
	temp= (struct node*)malloc(sizeof(struct node));
	temp->data =val;
	temp->next= NULL;
	return temp;
}
insertbeg(int val)
{
	struct node* ptr;
	ptr=getnewnode(val);
	ptr->next=head;
	head= ptr;
}
printList()
{
	struct node* run;
	run = head;
	while(run != NULL)
	{
		printf("%d -> ",run->data);
		run = run ->next;
	}
	printf("NULL");
}
void main()
{
	insertbeg(6);
	insertbeg(5);
	insertbeg(4);
	printList();
}

//output
4 -> 5 -> 6 -> NULL
--------------------------------
Process exited after 0.05065 seconds with return value 4
Press any key to continue . . .
