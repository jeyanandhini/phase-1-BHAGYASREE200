 pointers 
           -------
           |  i  |  👉 location name            
           ------- 
           |  5  |  👉 value at location   
           -------                  
           |65524|  👉 address of location    
           -------         
           
  •  ‘&’ used in   C’s ‘address of’ operator.    
  •   The other pointer operator available in C is ‘*’, called ‘value at address’ operator.    
  
  
  
# include <stdio.h>
int main( )
{
int i = 100;
printf ( "Address of i = %d\n", &i ) ;
printf ( "Value of i = %d\n", i ) ;
printf ( "Value of i = %d\n", *( &i ) ) ;
return 0 ;
}    
// output  
Address of i = 1710818788  
Value of i = 100  
Value of i = 100
 
 
 
 
 
 # include <stdio.h>
int main( )
{
int i = 100;
int  *j ;

j = &i;
printf ( "Address of i = %d\n", &i ) ;
printf ( "Value of i = %d\n", i ) ;
printf ( "Value at address  = %d\n", *( &i ) ) ;
printf("address of j = %d\n", &j);
printf("value of j = %d\n", j);
printf("value at address = %d\n",*j);
return 0 ;
}

//output 
Address of i = 460806652
Value of i = 100
Value at address  = 100
address of j = 460806656
value of j = 460806656
value at address = 100    
 
 
 # include <stdio.h>
int main( )
{
int i = 16;
int  *j ;
int **k;

j = &i;
k = &j;
printf ( "Address of i = %d\n", &i ) ;
printf ( "Value of i = %d\n", i ) ;
printf ( "Value at address  = %d\n", *( &i ) ) ;
printf("address of j = %d\n", &j);
printf("value of j = %d\n", j);
printf("value at address = %d\n",*j);
printf("address of k = %d\n", &k);
printf("value of k = %d\n", k);
printf("value at address = %d\n",*k);
return 0 ;
}
 
 
//output 
Address of i = 191294500
Value of i = 16
Value at address  = 16
address of j = 191294504
value of j = 191294500
value at address = 16
address of k = 191294512
value of k = 191294504
value at address = 191294500
 
 
 
 
