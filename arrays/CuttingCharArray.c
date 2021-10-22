
#include<stdio.h>
cut(int n, char arr[])
{
    printf("%s\n",arr);
    arr[11-n-1]="\0";
    printf("%s",arr);
}
void main()
{
    char arr[11]="helloworld";
    cut(3, arr);  
} 
//output
helloworld
hello
--------------------------------
Process exited after 0.1993 seconds with return value 5
Press any key to continue . . .

