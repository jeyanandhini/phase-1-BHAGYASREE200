#include<stdio.h>

int fun(int n)
{
	int Rupees;
	if(n==1)
	{
		return 1;
	}
	if(n==2)
	{
		return 2;
	}
	if(n==3)
	{
		return 4;
	}
	Rupees=fun(n-1)+fun(n-2)+fun(n-3);
	return Rupees;
}

int main()
{
	int n;
	printf("Rupees you want to divide ");
	scanf("%d",&n);
	int x;
	x=fun(n);
	printf("Number of ways to pay %d Rupees:\n",n);
	printf("%d\n",x);
}
//output
Rupees you want to divide 36
Number of ways to pay 36 Rs:
2082876103

--------------------------------
Process exited after 5.417 seconds with return value 11
Press any key to continue . . .
