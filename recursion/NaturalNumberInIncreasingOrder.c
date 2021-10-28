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
