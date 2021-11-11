#include<stdio.h>
#include<Stdlib.h>

struct node
{
int data;
struct node *next;
};
struct node *head=NULL;

struct node* getnewnode(int val)
{ 
 struct node*temp;
temp= (struct node*)malloc(sizeof(struct node));
temp->data=val;
temp->next=NULL;
return temp;

}

print()
{
struct node* run;
run=head;
while(run->next!=NULL)
{
printf("%d->",run->data);
run=run->next;
}
printf("%d",run->data);
printf("\n");
}

insertbeg(int val)
{ 
struct node *ptr;
ptr=getnewnode(val);
ptr->next=head;
head=ptr;
}
 void swap(struct node *prev,struct node *current)
 { 
 int temp;
 temp=prev->data;
 prev->data=current->data;
 current->data=temp;
 }
 
void sort()
{
int i,j;
for(i=0;i<4;i++)
{
for(j=0;j<4-i-1;j++)
{
struct node *prev=head;
struct node* current=prev->next;
int i,j;
while(current!=NULL)
{
if(prev->data>current->data)
{ 
swap(prev,current);
}
prev=prev->next;
current=current->next;
}
}
}
}

void main()
{insertbeg(4);
insertbeg(3);
insertbeg(2);
insertbeg(7);
insertbeg(5);
insertbeg(6);
print();
sort();
print();
}
//output
6->5->7->2->3->4
2->3->4->5->6->7

--------------------------------
Process exited after 0.06796 seconds with return value 10
Press any key to continue . . .
                                                       it took  25 min for me to complete this code
