#include<stdio.h>
 int mstrlen(char arr[])
 {
 	int count=0;
 	while(arr[count] != '\0')
 	{
 		count++ ;
	 }
	 return count;
 }
  int rev(char arr[],int n)
  {
  
  	int i;
  	char temp;
  	for (i=0;i<=n/2;i++)
  	{
  		temp=arr[i];
  		arr[i]=arr[n-i-1];
  		arr[n-i-1] =temp;
	  }
	  printf("%s",arr);
  }
  void main()
  {
  	char arr[20]="ankit is a good boy";
  	int n=mstrlen(arr);
  	rev(arr,19);
  }
//output
yob doog a si tikna
--------------------------------
Process exited after 0.1053 seconds with return value 19
Press any key to continue . . .
