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
