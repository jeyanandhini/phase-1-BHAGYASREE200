 Any integer is input through the keyboard. Write a program to find
out whether it is an odd number or even number.                

#include<stdio.h>            
int main()                
{                  
    int n;                   
    printf("enter n\n");               
    scanf("%d",&n);              
    if(n%2==0)                  
    {                   
        printf("even");                 
    }                       
    else                  
    {                  
         printf("odd");            
    }               
    return 0;                   
 } 
