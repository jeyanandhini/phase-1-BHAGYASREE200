	
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
	
