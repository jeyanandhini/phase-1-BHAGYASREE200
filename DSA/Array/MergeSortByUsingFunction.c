#include<stdio.h>
int main()
{
int arr[100],n,i,j;
printf("enter no of elements \n");
scanf("%d",&n);
printf("enter elements\n");
for(i=0;i<n;i++)
{
	scanf("%d",&arr[i]);
}
mergesort(arr,0,n-1);
    printf("after sorting\n");
    for(i=0;i<n;i++)
{
	printf("%d\n",arr[i]);
}
}
void mergesort(int arr[100],int start,int end)
{
	int mid;
	if(start<end)
	{
		mid=(start+end)/2;
		mergesort(arr,start,mid);
		mergesort(arr,mid+1,end);
		merge(arr,start,mid,end);
	}
}
void merge(int arr[100],int start,int mid,int end)
{
	int brr[100];
	int i,j,k;
	i=start;
	j=mid+1;
	k=start;
	while(i<=mid&&j<=end)
	{
		if(arr[i]<arr[j])
		brr[k++]=arr[i++];
		else
		brr[k++]=arr[j++];
	}
	if(i>mid)
	{
		while(j<=end)
		brr[k++]=arr[j++];
	}
	else
	{
		while(i<=mid)
		brr[k++]=arr[i++];
	}
	for(i=start;i<=end;i++)
	{
		arr[i]=brr[i];
	}
}
//output
enter no of elements
10
enter elements
11
33
22
55
44
66
77
99
88
100
after sorting
11
22
33
44
55
66
77
88
99
100

--------------------------------
Process exited after 16.3 seconds with return value 10
Press any key to continue . . .
