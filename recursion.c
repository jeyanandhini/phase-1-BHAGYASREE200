**Recursion**    
What is Recursion?        
      The process in which a function calls itself directly or indirectly is called recursion
      and the corresponding function is called as recursive function. Using recursive algorithm,
      certain problems can be solved quite easily. 

 👉*program to write n natural numbers in increasing order*            


#include <stdio.h>     
 int fun(int n)              
{   if (n==0)             
     return;              
    fun(n-1);              
    printf("%d ",n   );   
    }                      
    int main()                
{                   
   int n;            
   fun(5);           
    return 0;          
}                      
output : 1 2 3 4 5               

👉*program to print n natural numbers in decreaswing order*             

         
 #include <stdio.h>                  
 int fun(int n)          
{   if (n==0)                       
     return;                             
    printf("%d ",n);                           
    fun(n-1);                        
}                              
    int main()                    
{                        
   int n;             
   fun(5);               
    return 0;             
}                    
output : 5 4 3 2 1                           

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
 
👉 *program to find power of a number*                
 #include <stdio.h>                    
             
int f(int x , int n)             
{                      
    if (n== 0)                         
        return 1;                   
  int r =f(x,n-1);                      
  int ans=x*r;                       
  return ans;                        
    
}                      
int main()                      
     {                    
    int base, a, result;               
    scanf("%d%d", &base,&a);                  
    result = f(base, a);                
    printf("%d",result);                     
    return 0;                       
}                        
output:3 3          
27             
 
 
