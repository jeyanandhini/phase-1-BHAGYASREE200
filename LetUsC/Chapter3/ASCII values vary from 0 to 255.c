Write a program to print all the ASCII values and their equivalent
characters using a while loop. The ASCII values vary from 0 to 255.
   
   #include<stdio.h>
int main()
{
    int count=0;
    while(count<=255)
    {
        printf("ascii value of %c is %d\n",count,count);
        count++;
    }
    return 0;
}
