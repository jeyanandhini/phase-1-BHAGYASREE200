[chapter2](https://github.com/BHAGYASREE200/DOCUMENTATION-OF-ALWAYS-BE-ALERT/blob/main/if%20basic%20problem)                     
**more problems**:                
(a) If cost price and selling price of an item are input through the
keyboard, write a program to determine whether the seller has
made profit or incurred loss. Also determine how much profit he
made or loss he incurred.      
  #include<stdio.h>
int main()
{
    int cp,sp,profit,loss;        
    printf("enter cp and sp\n");  
    scanf("%d%d",&cp,&sp);          
    if(sp>cp)              
    {                
        profit=(sp-cp)*100/cp;            
        printf("profit is %d",profit);           
    }                
    else               
    {                 
        loss=(cp-sp)*100/cp;                 
        printf("loss is %d",loss);              
    }           
    return 0;          
}                    
                         
(b) Any integer is input through the keyboard. Write a program to find
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
 
 (c) Any year is input through the keyboard. Write a program to
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
 

