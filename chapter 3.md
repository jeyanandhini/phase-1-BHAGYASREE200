[chapter3](https://github.com/BHAGYASREE200/DOCUMENTATION-OF-ALWAYS-BE-ALERT/blob/main/loops%20problems)
**more problems**  


   (j) Write a program to find the range of a set of numbers entered
through the keyboard. Range is the difference between the smallest
and biggest number in the list.    


#include <stdio.h>   
#include<stdlib.h>   

int main()   
{   
    int small,big,range,num,count;   
    printf("enter count");   
    scanf("%d",&count);   
    printf("enter %d of number|\n",count);   
    scanf("%d",&num);  
    small=big=num;  
    count=count-1;  
    while(count)  
    {   
        scanf("%d",&num);   
        if(num>big)   
        {  
            big=num;   
        }  
        if(num<small)   
        {    
            small=num;   
        }   
        count--;   
    }   
 range = big - small;     
    printf("Small Number = %d\nBig Number = %d\n", small, big);     
    printf("Range is %d\n", abs(range));   
    return 0;   
}   
