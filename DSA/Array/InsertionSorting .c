#include<stdio.h>
int main()
    {
    int i,j,n,temp,arr[100];
    printf("Please enter the total count of the elements that you want to sort: \n");
    scanf("%d",&n);
    printf("Please input the elements that has to be sorted:\n");
    for(i=0;i<n;i++)
      {
        scanf("%d",&arr[i]);
      }
    for(i=1;i<=n-1;i++)
      {
        temp=arr[i];
        j=i-1;
       while((temp<arr[j])&&(j>=0))
           {
             arr[j+1]=arr[j];
             j=j-1;
            }
       arr[j+1]=temp;
       }
    printf("\n Output generated after using insertion sort \n");
    for(i=0;i<n;i++)
    {
    printf("%d ",arr[i]);
    }
    return 0;
    }

//output//
Please enter the total count of the elements that you want to sort:
6
Please input the elements that has to be sorted:
-
55
-4
66
22
44

 Output generated after using insertion sort
-4 0 22 44 55 66
--------------------------------
Process exited after 16.94 seconds with return value 0
Press any key to continue . . .
