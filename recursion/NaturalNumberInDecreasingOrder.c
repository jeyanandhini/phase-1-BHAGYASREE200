
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

 
