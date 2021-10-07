#include<stdio.h>
int main ()
{
	int arr[6][6];
	int i,j ;
	int put= 1;
	for (i=0;i<6;i++)
	{
		for (j=0;j<6;j++)
		{
		    arr[i][j]=put++;
		    if(put>19)
		    {
		    	arr[i][j]=36-(put-2);
			}
			
		}
	}
	for (i=0;i<6;i++)
	{
		for (j=0;j<6;j++)
		{
		    printf("%2d ",arr[i][j]);
		}
		printf("\n");
	}
	
}
//output
 1  2  3  4  5  6
 7  8  9 10 11 12
13 14 15 16 17 18
18 17 16 15 14 13
12 11 10  9  8  7
 6  5  4  3  2  1

--------------------------------
Process exited after 0.03193 seconds with return value 10
Press any key to continue . . .
