#include <stdio.h>
int main ()
{
	int arr[6]={22,33,44,55,66,77};
	int i;
	for (i=0;i<=5;i++)
	{
		printf("%d\n",arr[i]);
  }
    int start ,end ;
    int sum;
    sum=0;
    printf("enter start and end");
    scanf("%d %d",&start,&end);
    for(i=start;i<=end;i++)
    {
    	sum = sum +arr[i];
   	}
	printf("sum is %d",sum);
	return 0;
}
OUTPUT:
22
33
44
55
66
77
enter start and end
2
4
sum is 165
--------------------------------
Process exited after 5.847 seconds with return value 0
Press any key to continue . . .
