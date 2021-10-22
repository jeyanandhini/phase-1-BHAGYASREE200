#include <stdio.h>
struct point 
{
	int x;
	int y;
};
area(struct point A,struct point B)
{
	int area;
	area = 2* 1/2 *(B.y - A.y)*(B.x - A.x);
	return area;
}
int main()
{
struct point A,B;
A.x=15;
A.y=15;
B.x=20;
B.y=20;
area(A,B);
	printf("%d",area(A,B));
}
//output
25
--------------------------------
Process exited after 0.01929 seconds with return value 2
Press any key to continue . . .
