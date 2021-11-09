Two numbers are entered through the keyboard. Write a program
to find the value of one number raised to the power of another.  
   
 #include<stdio.h>
int main()
{
    int a,b,pow=1;
    printf("enter a and b");
    scanf("%d%d",&a,&b);
    while(b!=0)
    {
      pow=pow*a;
      b=b-1;
    }
    printf("%d is raised to %d:%d",a,b,pow);
    return 0;
}
