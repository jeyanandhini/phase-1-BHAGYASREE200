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
	selectionsort(arr,n);
	printf("after sorting\n");
	for(i=0;i<n;i++)
	{
		printf("%d\n",arr[i]);
	}
}
void selectionsort(int arr[100],int n)
{
	int i ,j , min,temp;
for(i=0;i<n-1;i++)
    {
       min=i;
      for(j=i+1;j<n;j++)
        {
          if(arr[min]>arr[j])
             min=j;
         }
    if(min!=i)
        {
           temp=arr[i];
           arr[i]=arr[min];
           arr[min]=temp;
         }
     }
}
enter no of elements
5
enter elements
500
300
200
400
100
after sorting
100
200
300
400
500

--------------------------------
Process exited after 12.29 seconds with return value 5
Press any key to continue . . .
