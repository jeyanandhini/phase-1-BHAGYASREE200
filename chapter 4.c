

#include <stdio.h>
 
/* function declaration */
int max(int num1, int num2);
 
int main () {

   /* local variable definition */
   int a = 100;
   int b = 200;
   int ret;
 
   /* calling a function to get max value */
   ret = max(a, b);
 
   printf( "Max value is : %d\n", ret );
 
   return 0;
}
 
/* function returning the max between two numbers */
int max(int num1, int num2) {

   /* local variable declaration */
   int result;
 
   if (num1 > num2)
      result = num1;
   else
      result = num2;
 
   return result; 
} 
//output 
max value is 200






#include <stdio.h>

     int sum (int a, int b) 
    {
	    int s;
		s=a+b;
        return s; 
    }
    int main (void)
    {
        int total;
		
        total = sum (5, 6);
        printf ("The total is :  %d\n", total);
        return 0;
    }
    
    //output 
the total is 11



















