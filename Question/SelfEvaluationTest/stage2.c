#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node*next;
};
struct node* head=NULL;
void display()
{
	struct node*run;
	run=head;
	while(run->next != NULL)
	{
		printf("%d->",run->data);
		run=run->next;
	}
	struct node*ptr;
	ptr=head;
	while(ptr->next != NULL)
	{
		ptr=ptr->next;
	}
	printf("%d\n",ptr->data);
}
struct node* getnewnode(int val)
{
	struct node*temp;
	temp=(struct node*)malloc(sizeof(struct node));
	temp->data=val;
	temp->next=NULL;
	return temp;
}
int insertion_at_beg(int val)
{
	struct node*ptr;
	ptr=getnewnode(val);
	ptr->next=head;
	head=ptr;
}
int insertion_at_end(int val)
{
	struct node*ptr;
	ptr=getnewnode(val);
	struct node*run;
	run=head;
	while(run->next != NULL)
	{
		run=run->next;
	}
	run->next=ptr;
}
int insertion_at_position(int val,int position)
{
	struct node*ptr;
	ptr=(struct node*)malloc(sizeof(struct node));
	ptr->data=val;
	int i;
	struct node*temp=head;
	if(position==1)
	{
		ptr->next=temp;
		head=ptr;
		return;
	}
	for(i=1;i<position-1;i++)
	{
		temp=temp->next;
	}
	ptr->next=temp->next;
	temp->next=ptr;
}
int delete_at_position(int pos)
{
	struct node *run;
	run = head;
	
	int i;
	for(i=1; i<pos; i++)
	{
		run = run->next;
	}
	struct node *ptr;
	ptr = run->next->next;
	
	free(run->next);
	
	run->next = ptr;
}
int main()
{
	insertion_at_beg(2);
	display(head);
	insertion_at_end(3);
	display(head);
	insertion_at_beg(5);
	display(head);
	insertion_at_beg(6);
	display(head);
	insertion_at_end(4);
	display(head);
	insertion_at_position(7,3);
	display(head);	
	delete_at_position(3);
	display(head);	
}
//output
2
2->3
5->2->3
6->5->2->3
6->5->2->3->4
6->5->7->2->3->4
6->5->7->3->4

--------------------------------
Process exited after 0.02339 seconds with return value 2
Press any key to continue . . .

                                                                       It took 17 minutes for me to complete he code
