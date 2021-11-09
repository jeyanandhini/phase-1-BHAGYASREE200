#include <stdio.h>
int fun(int n)
{
	if(n==0)
	{
		return 0 ;
	}
	printf("pre %d\n ",n);
	fun(n-1);
	printf("in %d\n ",n);
	fun(n-1);
	printf("post %d\n ",n);
}
int main()
{
	int n=4;
	fun(n);
}
//output
pre 4
 pre 3
 pre 2
 pre 1
 in 1
 post 1
 in 2
 pre 1
 in 1
 post 1
 post 2
 in 3
 pre 2
 pre 1
 in 1
 post 1
 in 2
 pre 1
 in 1
 post 1
 post 2
 post 3
 in 4
 pre 3
 pre 2
 pre 1
 in 1
 post 1
 in 2
 pre 1
 in 1
 post 1
 post 2
 in 3
 pre 2
 pre 1
 in 1
 post 1
 in 2
 pre 1
 in 1
 post 1
 post 2
 post 3
 post 4

--------------------------------
Process exited after 0.07149 seconds with return value 8
Press any key to continue . . .
