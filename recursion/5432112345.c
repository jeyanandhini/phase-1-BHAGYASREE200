
#include<stdio.h>
int f(int n)
{
	if(n==0)
	{
		return ;
	}
	
	printf("%d ",n);
	f(n-1);
	printf("%d ",n);
}
int main()
{
	int n=5;
	f(n);
}
//output
5 4 3 2 1 1 2 3 4 5
--------------------------------
Process exited after 0.008916 seconds with return value 2
Press any key to continue . . .



