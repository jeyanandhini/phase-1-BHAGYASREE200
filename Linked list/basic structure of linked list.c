#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node* next;
};


int main()
{
	struct node* head;
	struct node* temp;
	temp = (struct node*)malloc(sizeof(struct node));
	temp-> data = 10;
	temp-> next = NULL;
	head = temp;
	
	struct node* temp1;
	temp1 = (struct node*)malloc(sizeof(struct node));
	temp1-> data = 11;
	temp1-> next = NULL;
	
	return 0;
}
