	
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
 deletion_beginning()
{ 
 if(head == NULL) 
 printf("\n The list is Empty\n"); 
 struct node *temp;
 temp = head; 
 head = head -> next; 
 free(temp);
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
	printf("NULL\n");
}
void main()
{
	insertbeg(6);
	insertbeg(5);
	insertbeg(4);
	insertbeg(1);
	deletion_beginning();	
	printList();
	insertbeg(410);
	insertbeg(9);	
	deletion_beginning();
	printList();
}
//output
4 -> 5 -> 6 -> NULL
410 -> 4 -> 5 -> 6 -> NULL

--------------------------------
Process exited after 0.02772 seconds with return value 0
Press any key to continue . . .
