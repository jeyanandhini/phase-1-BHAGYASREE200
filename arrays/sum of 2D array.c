#include<stdio.h> 
void main()
{
int arr[2][2]={1,8,6,7};
sum(arr);
}
  int  sum( int arr[])
{
int add=0;
int n;

int i,j;

 for(i=0;i<2;i++)
 {
 	
 for(j=0;j<2;j++)
 {
 	int k;
	 k= (*((arr + i ) + j) );
	 
 	 add= add + k;
 	printf("%d\n",add);
 }
 }
}
//output 
1
9
17
23

--------------------------------
Process exited after 0.1749 seconds with return value 3
Press any key to continue . . .
