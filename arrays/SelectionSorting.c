//sorting in ascending order //

#include<stdio.h>

int  main()
    {
    int n,i,j,min,temp;
    int a[20];
    printf("\n Enter the Number of Elements: ");
    scanf("%d",&n);
    printf("\n Enter %d Elements: ",n);
    for(i=0;i<n;i++)
    {
    scanf("%d",&a[i]);
    }
    for(i=0;i<n-1;i++)
    {
       min=i;
      for(j=i+1;j<n;j++)
        {
          if(a[min]>a[j])
             min=j;
         }
    if(min!=i)
        {
           temp=a[i];
           a[i]=a[min];
           a[min]=temp;
         }
     }
    printf("\n The Sorted array in ascending order:\n ");
    for(i=0;i<n;i++)
    {
    printf("%d ",a[i]);
    }
    return;
    }

//output:

 Enter the Number of Elements: 8

 Enter 8 Elements: -90
-33
77
0
33
195
99
-5

 The Sorted array in ascending order:
 -90 -33 -5 0 33 77 99 195
--------------------------------
Process exited after 27.21 seconds with return value 8
Press any key to continue . . .
