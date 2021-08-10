
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

(e) Write a program to print out all Armstrong numbers between 1 and
500. If sum of cubes of each digit of the number is equal to the
number itself, then the number is called an Armstrong number. For
example, 153 = ( 1 * 1 * 1 ) + ( 5 * 5 * 5 ) + ( 3 * 3 * 3 ).

#include <stdio.h>

int main()
{
    int num,count=1,rem,sum;
    while(count<=500)
    {
        num=count;
        sum=0;
        while(num)
        {
            rem=num%10;
            sum=sum+(rem*rem*rem);
            num=num/10;
        }
        if(count==sum)
        {
            printf("amstrong num %d\n",count);
        }
       count++ ;
    }


    return 0;
}


(d) Write a program to print all the ASCII values and their equivalent
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
   
(c) Two numbers are entered through the keyboard. Write a program
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

(b) Write a program to find the factorial value of any number entered
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

Write a program to fill the entire screen with a smiling face. The
smiling face has an ASCII value 1.     
   
  #include<stdio.h>                               
   int main()                          
 {                      
    int i;                         
    for(i = 0; i <= 5000; i++)                             
    {                                 
        printf("%c", 1);                           
    }                               
    return 0;                      
}      
    

Write a program to add first seven terms of the following series
using a for loop
        1/1! + 2/2! + 3/3! + ........
#include<stdio.h>
int main()
{
    int i , j  ;
    float fact , div , sum = 0 ;
    for(i = 1; i <=7; i++)
    { 
        fact = 1;
        for(j = 1; j<=i; j++)
        {
            fact = fact*j;
        }
        div = i/fact;
        sum = sum + div ;
    }
    printf("sum of first seven terms %.2f",sum);
    return 0;
}
