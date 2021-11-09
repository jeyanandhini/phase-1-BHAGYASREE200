#include<stdio.h>
int f(int n)
{
	if(n==1)
	{
		return 1;
	}
	printf("%d ",n);
	f(n-1);
	printf("%d ",n-1);
}
int main()
{
	int n=5;
	f(n);
  printf("%d ",n);
}
//output
5 4 3 2 1 2 3 4 5
--------------------------------
Process exited after 0.06737 seconds with return value 2
Press any key to continue . . .


