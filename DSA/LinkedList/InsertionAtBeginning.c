	
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
	
----------------------------------------------------------------------------------------------------------------------------------------------------------------------
	

#include<stdio.h>
#include<malloc.h>
struct node
{
	int data;
	struct node*next;
};
struct node* head =NULL;
printList ()
{
	struct node* run;
	run =head;
	while(run != NULL)
	{
		printf("%d->",run->data);
		run = run->next;
	}
	printf("NULL\n");
}
struct node* getnewnode(int val )
{
	struct node* temp;
	temp=(struct node*)malloc(sizeof(struct node));
	temp->data = val;
	temp->next = NULL;
	return temp;
	
}
insertatbeg(int val)
{
	struct node* ptr;
	ptr=getnewnode(val);
	ptr->next = head;
	head=ptr;
}

void main()
{
	insertatbeg(100);
	insertatbeg(200);
	insertatbeg(300);
	insertatbeg(400);
	printList();
	insertatbeg(900);
	insertatbeg(500);
	printList();
}
//output
400->300->200->100->NULL
500->900->400->300->200->100->NULL

--------------------------------
Process exited after 0.03576 seconds with return value 0
Press any key to continue . . .
