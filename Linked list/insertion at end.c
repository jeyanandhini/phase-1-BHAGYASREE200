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
insertend(int val)
{
	struct node* ptr;
	ptr=getnewnode(val);
	
	struct node* run;
	run=head;
	while(run->next!=NULL)
	{
		run=run->next;	
	}
	run->next=ptr;
	
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
	insertend(20);
	printList();
}
//output
4 -> 5 -> 6 -> 20 -> NULL
--------------------------------
Process exited after 0.03757 seconds with return value 4
Press any key to continue . . .
