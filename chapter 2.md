[chapter2](https://github.com/BHAGYASREE200/DOCUMENTATION-OF-ALWAYS-BE-ALERT/blob/main/if%20basic%20problem)                     
**more problems**:                
(a) If cost price and selling price of an item are input through the
keyboard, write a program to determine whether the seller has
made profit or incurred loss. Also determine how much profit he
made or loss he incurred.      
  #include<stdio.h>
int main()
{
    int cp,sp,profit,loss;        
    printf("enter cp and sp\n");  
    scanf("%d%d",&cp,&sp);          
    if(sp>cp)              
    {                
        profit=(sp-cp)*100/cp;            
        printf("profit is %d",profit);           
    }                
    else               
    {                 
        loss=(cp-sp)*100/cp;                 
        printf("loss is %d",loss);              
    }           
    return 0;          
}                    
                         
(b) Any integer is input through the keyboard. Write a program to find
out whether it is an odd number or even number.                

#include<stdio.h>            
int main()                
{                  
    int n;                   
    printf("enter n\n");               
    scanf("%d",&n);              
    if(n%2==0)                  
    {                   
        printf("even");                 
    }                       
    else                  
    {                  
         printf("odd");            
    }               
    return 0;                   
 }                 
 
 (c) Any year is input through the keyboard. Write a program to
determine whether the year is a leap year or not.
(Hint: Use the % (modulus) operator)  

#include<stdio.h>   
int main()   
{  
    int year;                    
    printf("enter year\n");             
    scanf("%d",&year);                
    if(year%400==0)                  
    {                    
        printf("leap year");                      
    }                             
    else if(year%4==0)                          
    {                      
        printf(" leap year");              
    }               
    else                        
    {                       
        printf("not a leap year");              
    }              
    return 0;                   
}                         
    
(d)  According to the Gregorian calendar, it was Monday on the date
01/01/01. If any year is input through the keyboard write a program
to find out what is the day on 1st January of this year.      

#include <stdio.h>  
int main ()    
{  
int year,days,d;   
printf("year?\n");   
scanf("%d",&year);    
days = 365*year + (year-1)/4 - (year-1)/100 + (year-1)/400 ;    
d=days%7;      
if(d==1)    
printf("\n\n\tmonday");    
else if(d==2)   
printf("\n\n\ttuesday");    
else if(d==3)      
printf("\n\n\twednesday");   
else if(d==4)   
printf("\n\n\tthursday");   
else if(d==5)     
printf("\n\n\tfriday");    
else if(d==6)    
printf("\n\n\tsaturday");      
else if(d==0)   
printf("\n\n\tsunday");    
return(0);   
}   

(e) A five-digit number is entered through the keyboard. Write a
program to obtain the reversed number and to determine whether
the original and reversed numbers are equal or not.       

#include<stdio.h>                           
int main()                          
{                        
	int num,a,b,c,d,e,x;                              
	printf("Enter a five digit number : ");                    
	scanf("%d", &num);                         
	//separating digits of the number                    
	e = num % 10;                        
	d = (num/10) % 10;                           
	c = (num/100) % 10;                          
	b = (num/1000) % 10;                    
	a = (num/10000);                       
	//reversing the number                              
	x = e*10000 + d*1000 + c*100 + b*10 + a;                  
	printf("\n%d", x);                      
	if(x == num)                                
	{                              
		printf("equal");                          
	}                       
		else                
		{                   
		    printf("not equal");                      
		}                   
	return 0;                    
}                         
 
 (f) If the ages of Ram, Shyam and Ajay are input through the keyboard,
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

  Enter the ages of Ajay :30   

 Enter the ages of Ram :40   

 Enter the ages of Shyam :50   

 The youngest of the three is Ajay    
 
 (g) Write a program to check whether a triangle is valid or not, when
the three angles of the triangle are entered through the keyboard.
A triangle is valid if the sum of all the three angles is equal to 180
degrees.                  

#include<stdio.h>                        
int main()                  
{                       
	int a,b,c;                    
	printf(" enter a,b,c\n");                         
	scanf("%d%d%d",&a,&b,&c);                       
	if((a+b+c)==180)                   
	printf("triangle");                         
	else                         
	printf("not a triangle");                     
	return 0;                  
}    

 enter a,b,c   
60 60 60   
triangle    

(h) Write a program to find the absolute value of a number entered
through the keyboard.       

#include <stdio.h>                 
int main()                    
{                           
   int number ;                    
   printf("enter number");                  
   scanf("%d",&number);                
   if (number<0)                        
   {                      
       number=(-1)*number;             
   }                     
   printf("the absolute value is %d",number);                    
    return 0;               
} 

(i) Given the length and breadth of a rectangle, write a program to find
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

(j) Given three points (x1, y1), (x2, y2) and (x3, y3), write a program
to check if all the three points fall on one straight line.                            

#include<stdio.h>           
int main()                                 
{                        
    float x1, y1, x2, y2, x3, y3, m, n;             
    printf("Enter points (x1, y1)\n");                          
    scanf("%f%f", &x1, &y1);                        
    printf("Enter points (x2, y2)\n");                       
    scanf("%f%f", &x2, &y2);                      
    printf("Enter points (x3, y3)\n");                      
    scanf("%f%f", &x3, &y3);                            
    m = (y2 - y1) / (x2 - x1);             
    n = (y3 - y2) / (x3 - x2);               
    if( m == n)                 
    {                        
        printf("All 3 points lie on the same line\n");               
    }                    
    else                     
    {                
        printf("All 3 points do not lie on the same line\n");               
    }                     
    return 0;                   
}                

  
