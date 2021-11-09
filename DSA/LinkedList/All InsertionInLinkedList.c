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
insertatend(int val)
{
	struct node* ptr;
	ptr=getnewnode(val);
	
	struct node* run;
	run =head;
	while(run->next != NULL)
	{
		run =run ->next;
	}
	run->next=ptr;
}
ins_at_pos_n(int val,int position)
    {
    	struct node *ptr = (struct node*)malloc(sizeof(struct node));
    	ptr->data=val;		
    	int i;
    	struct node *temp=head;
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

void main()
{
	insertatbeg(100);
	insertatbeg(200);
	insertatend(1000);
	insertatbeg(300);
	insertatbeg(400);
	insertatend(600);
	ins_at_pos_n(800,3);
	printList();
	insertatend(700);
	insertatbeg(900);
	insertatbeg(500);
	printList();
}
//output
400->300->800->200->100->1000->600->NULL
500->900->400->300->800->200->100->1000->600->700->NULL

--------------------------------
Process exited after 0.02626 seconds with return value 0
Press any key to continue . . .
