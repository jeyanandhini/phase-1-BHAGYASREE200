Write a program to check whether a triangle is valid or not, when
the three angles of the triangle are entered through the keyboard.
A triangle is valid if the sum of all the three angles is equal to 180
degrees.                  

#include<stdio.h>                        
int main()                  
{                       
	int a,b,c;                    
	printf(" enter a,b,c\n");                         
	scanf("%d%d%d",&a,&b,&c);                       
	if((a+b+c)==180)                   
	printf("triangle");                         
	else                         
	printf("not a triangle");                     
	return 0;                  
}    
//output
 enter a,b,c   
60 60 60   
triangl
