Write a program to find the factorial value of any number entered
through the keyboard.   
   
#include<stdio.h>
#include<conio.h>
int main()
{
    int num, fact=1, n;
    printf("Enter a number: ");
    scanf("%d", &num);
    n = num;
    while (num!=0)
    {
        fact = fact*num;
        num = num-1;
    }

    printf("The Factorial for %d is %d", n, fact);
}  
