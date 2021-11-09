
#include<stdio.h>
int main()
{
	int arr[6][6];
	int i;
	int j;
	int put;
	put=1;
	for(i=0;i<6;i++)
	{
		for(j=0;j<6;j++)
		{
			arr[i][j]=put++;
			
		}
	}
	for (i=0;i<6;i++)
	{
		for(j=0;j<6;j++)
		{
			printf("%2d ",arr[i][j]);
		}
		printf("\n");
	}
	printf("spiral traversal\n");
	int minr=0;
	int minc=0;
	int maxr=5;
	int maxc=5;
	for (i=minr;i<=maxr;i++)
	{
		printf(" %2d  ",arr[i][minc]);
	}
	minc++;
	for (i=minc;i<=maxc;i++)
	{
		printf(" %2d  ",arr[maxr][i]);
	}
	maxr--;
	for (i=maxr;i>=minr;i--)
	{
		printf(" %2d  ",arr[i][maxc]);
	}
	maxc--;
	for (i=maxc;i>=minc;i--)
	{
		printf(" %2d  ",arr[minr][i]);
	}
	minr++;
		for (i=minr;i<=maxr;i++)
	{
		printf(" %2d  ",arr[i][minc]);
	}
	minc++;
	for (i=minc;i<=maxc;i++)
	{
		printf(" %2d  ",arr[maxr][i]);
	}
	maxr--;
	for (i=maxr;i>=minr;i--)
	{
		printf(" %2d  ",arr[i][maxc]);
	}
	maxc--;
	for (i=maxc;i>=minc;i--)
	{
		printf(" %2d  ",arr[minr][i]);
	}
	minr++;
		for (i=minr;i<=maxr;i++)
	{
		printf(" %2d  ",arr[i][minc]);
	}
	minc++;
	for (i=minc;i<=maxc;i++)
	{
		printf(" %2d  ",arr[maxr][i]);
	}
	maxr--;
	for (i=maxr;i>=minr;i--)
	{
		printf(" %2d  ",arr[i][maxc]);
	}
	maxc--;
	for (i=maxc;i>=minc;i--)
	{
		printf(" %2d  ",arr[minr][i]);
	}
	minr++;
}
//output 
OUTPUT:

The given array:
  1   2   3   4   5   6
  7   8   9  10  11  12
 13  14  15  16  17  18
 19  20  21  22  23  24
 25  26  27  28  29  30
 31  32  33  34  35  36

The spiral array:   
 1  7  13  19  25  31  32  33  34  35  36  30  24  18  12  6  5  4  3  2  8  14  20  26  27  28  29  23  17  11  10  9  15  21  22  16
