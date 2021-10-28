👉*program to find factorial of a number*                       
 
 #include <stdio.h>                 
 int fact(int n)                  
{   if (n==1)                      
     return 1 ;                      
    
int x=fact(n-1);                       
int ans=n*x;                     
}                                  
    int main()                            
{                           
   int n;                   
   scanf("%d",&n);                        
   printf("%d",fact(n));                            
    return 0;                            
}                              
 output: 5                      
 120                        
 
