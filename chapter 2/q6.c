If the ages of Ram, Shyam and Ajay are input through the keyboard,
write a program to determine the youngest of the three     

#include<stdio.h>                                
int main()               
{                      
	int Ajay,Ram,Shyam;                            
	printf(" Enter the ages of Ajay :");                   
	scanf("%d",&Ajay);          
	printf("\n Enter the ages of Ram :");                 
	scanf("%d",&Ram);                      
	printf("\n Enter the ages of Shyam :");                            
	scanf("%d",&Shyam);                       
	if(Ram < Ajay && Ram < Shyam)                
	{                          
		printf("\n The youngest of the three is Ram");              
	}                       
	else if(Ajay < Ram && Ajay < Shyam)                     
	{                   
		printf("\n The youngest of the three is Ajay");                     
	}                      
	else if(Shyam < Ram && Shyam < Ajay)                       
	{                     
		printf("\nThe youngest of the three is Shyam");                    
	}                    
	else                   
	{                  
		printf("\nSame Age");                     
	}                 
	return 0;                    
}                      
//output
  Enter the ages of Ajay :30   

 Enter the ages of Ram :40   

 Enter the ages of Shyam :50   

 The youngest of the three is Ajay    
 
