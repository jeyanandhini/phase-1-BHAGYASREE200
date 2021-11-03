#include<stdio.h>

int fibonacci(int n)
{
	if(n==0)
	{
		return 0; 
	}
	else if (n==1)
	{
		return 1;
	}
	return fibonacci(n-1)+fibonacci(n-2);
}
int main()
{
	int n;
	printf("The Fibonacci series is:\n");
	fibonacci(n);
	for(n=1; n<10; n++)
	{
		printf(" %d ",fibonacci(n));
	}
	printf("\n");
	return 0;
}
//output
The Fibonacci series is:
 1  1  2  3  5  8  13  21  34

--------------------------------
Process exited after 0.06033 seconds with return value 0
Press any key to continue . . .
