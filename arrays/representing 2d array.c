#include<stdio.h>
 void main()
  {
    int a[5][6];
      int i;
      int j;
      int k;
      k = 0;
      int temp;
      int flag;
    
   a[0][0] = 1947;
   printf(" The elements in the array are: \n");

      for(i=0; i<5; i++)
    	{
         	for(j=0; j<6; j++)
          	{
            		temp = a[0][0] + k;
            		printf("%d \t", temp);
            		if(temp == 1971)
                        flag = 1;
             
                         k++;
           	}
        	printf("\n");
     	}

     	 if( flag == 1)
        printf("\n 1971 exists!!!!");
  }
