Write a program to find the absolute value of a number entered
through the keyboard.       

#include <stdio.h>                 
int main()                    
{                           
   int number ;                    
   printf("enter number");                  
   scanf("%d",&number);                
   if (number<0)                        
   {                      
       number=(-1)*number;             
   }                     
   printf("the absolute value is %d",number);                    
    return 0;               
} 
