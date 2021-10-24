Any year is input through the keyboard. Write a program to
determine whether the year is a leap year or not.
(Hint: Use the % (modulus) operator)  

#include<stdio.h>   
int main()   
{  
    int year;                    
    printf("enter year\n");             
    scanf("%d",&year);                
    if(year%400==0)                  
    {                    
        printf("leap year");                      
    }                             
    else if(year%4==0)                          
    {                      
        printf(" leap year");              
    }               
    else                        
    {                       
        printf("not a leap year");              
    }              
    return 0;                   
}                         
