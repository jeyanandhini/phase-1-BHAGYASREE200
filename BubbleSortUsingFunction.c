#include <stdio.h>

void bubblesort(int arr[100],int n)
{
	int i,j;
	int temp;
for (i=0;i<n;i++)
	{
	   for (j=i+1;j<n;j++)
		{
		  if (arr[i]>arr[j])
			{
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
}

int main()
{
	int arr[100],n,i,j;
	printf("enter elements n\n");
	scanf("%d",&n);
	printf("elements are\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	bubblesort(arr,n);
	printf("after sorting\n");
for(i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
}
//output
enter elements n
5
elements are
500
200
100
30
400
after sorting
30 100 200 400 500
--------------------------------
Process exited after 14.22 seconds with return value 5
Press any key to continue . . .
