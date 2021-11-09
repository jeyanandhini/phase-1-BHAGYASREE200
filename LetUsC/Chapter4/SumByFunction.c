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
