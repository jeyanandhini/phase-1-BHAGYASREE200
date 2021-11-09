#include<stdio.h>
int fun(int x ,int k)
{
	int c ;
	int m ;
	if(k == 0)
	{
		return 1;
	}
	c = fun(x , k/2)*fun(x , k/2);
	if(k%2==0)
	{
		return c;
	}
	m = x*c;
	if(k%2!=0)
	{
		return m;
	}
}
int main()
{
	int i;
	i = fun(2,8);
	printf("%d",i);
}
//output
256
--------------------------------
Process exited after 0.05105 seconds with return value 3
Press any key to continue . . .
