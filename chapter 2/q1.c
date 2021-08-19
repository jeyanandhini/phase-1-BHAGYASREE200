  
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
   
