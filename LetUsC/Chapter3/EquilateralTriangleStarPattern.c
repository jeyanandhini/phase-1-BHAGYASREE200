equilateral triangle programming 
#include <stdio.h>

int main() {
   int rows,i,j;
printf("enter rows\n");
scanf("%d",&rows);

   for(i = 1; i <= rows; i++)
   {
      for(j = 1; j <= rows-i; j++)
         printf(" ");

      for(j = 1; j <= i; j++)
         printf("* ");

      printf("\n");
   }
   return 0;
}   
//output  
enter rows
5
    * 
   * * 
  * * * 
 * * * * 
* * * * * 
