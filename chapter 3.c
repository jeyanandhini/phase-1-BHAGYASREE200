
**more problems**  


   (j) Write a program to find the range of a set of numbers entered
through the keyboard. Range is the difference between the smallest
and biggest number in the list.    


#include <stdio.h>   
#include<stdlib.h>   

int main()   
{   
    int small,big,range,num,count;   
    printf("enter count");   
    scanf("%d",&count);   
    printf("enter %d of number|\n",count);   
    scanf("%d",&num);  
    small=big=num;  
    count=count-1;  
    while(count)  
    {   
        scanf("%d",&num);   
        if(num>big)   
        {  
            big=num;   
        }  
        if(num<small)   
        {    
            small=num;   
        }   
        count--;   
    }   
 range = big - small;     
    printf("Small Number = %d\nBig Number = %d\n", small, big);     
    printf("Range is %d\n", abs(range));   
    return 0;   
}   

(h) Write a program to receive an integer and find its octal equivalent.     

#include <stdio.h>   
#include<math.h>   

int main()   
{   
    int integer,oct=0,num,i=0;   
    printf("enter integer");   
    scanf("%d",&integer);   
    while(integer!=0)   
    {                
     num=integer%8;   
     oct=oct+num*pow(10,i);    
     integer=integer/8;    
     i++;    
    }     
    printf("enter oct %d", oct);     
    return 0;    
}   

(g) Write a program to enter numbers till the user wants. At the end it
should display the count of positive, negative and zeros entered.   

#include < stdio.h >  
  
int main()  
{  
    int limit, num, positive = 0, negative = 0, zero=0;                        
    printf("Enter the limit\n");                    
    scanf("%d", &limit);  
    printf("Enter %d numbers\n", limit);  
    while(limit)  
    {  
        scanf("%d", &num);  
        if(num > 0)  
        {  
            positive++;  
        }  
        else if(num < 0)  
        {  
            negative++;  
        }  
        else  
        {  
            zero++;  
        }  
        limit--;  
    }  
    printf("\nPositive Numbers: %d\n", positive);  
    printf("Negative Numbers: %d\n", negative);  
    printf("Number of zero: %d\n", zero);  
    return 0;  
}    


(f)Write a program for a matchstick game being played between the
computer and a user. Your program should ensure that the
computer always wins. Rules for the game are as follows:
 There are 21 matchsticks.
 The computer asks the player to pick 1, 2, 3, or 4 matchsticks.
 After the person picks, the computer does its picking.
 Whoever is forced to pick up the last matchstick loses the game   

#include<stdio.h>                 
int main()                      
{                      
    int m=21,p,c;                  
   while(1)                      
   {               
    printf("number of match sticks left %d\n",m);               
    printf("pick 1 or 2 or 3 or 4\n");                       
    scanf("%d",&p);                     
    if(p>4 || p<1)                    
    continue;                    
    m=m-p;               
    printf("number of match sticks left %d\n",m);                  
    c=5-p;                    
    printf("number of match sticks left %d\n",m);              
    m=m-c;              
   if(m==1)                  
   {                       
       printf("number of match sticks left %d\n",m);                  
       printf("loss the game");                     
       break;                        
   }                      
   }                     
   return 0;                
}                        

