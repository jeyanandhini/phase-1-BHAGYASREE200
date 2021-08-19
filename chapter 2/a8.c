Given the length and breadth of a rectangle, write a program to find
whether the area of the rectangle is greater than its perimeter. For
example, the area of the rectangle with length = 5 and breadth = 4
is greater than its perimeter.             

 #include <stdio.h>   
int main()   
{                        
   int l,b,a,p ;              
   printf("enter l,b");                   
   scanf("%d%d",&l,&b);                
   a=l*b;                  
   p=2*(l+b);                 
   if (a>p)                  
   {                     
       printf("a is greater then p");            
   }                
    return 0;              
}
