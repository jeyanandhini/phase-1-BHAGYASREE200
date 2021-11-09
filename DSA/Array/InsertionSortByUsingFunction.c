#include <stdio.h>
int main()
{
	int arr[100],n,i,j,tmp;
	printf("enter no of elements\n");
	scanf("%d",&n);
	printf("enter elements\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	insertionsort(arr, n);
	printf("after sorting\n");
	for(i=0;i<n;i++)
	{
		printf("%d\n",arr[i]);
	}
}
void insertionsort(int arr[100], int n)
{
	int i,j,tmp;
 for(i=0; i<n; i++)
 {
   for(j=i-1; j>=0; j--) 
   {
    if(arr[j]>arr[j+1])
    {
      tmp=arr[j];
      arr[j]=arr[j+1];
      arr[j+1]=tmp;
    }
    else
      break;
   }
 }
}
//output
enter no of elements
5
enter elements
44
22
55
33
11
after sorting
11
22
33
44
55

--------------------------------
Process exited after 10.43 seconds with return value 5
Press any key to continue . . .
