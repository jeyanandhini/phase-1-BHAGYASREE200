#include<stdio.h>
int main()
{
    int a[6]={1,3,5,7,9,11};
    int b[6]={2,4,6,8,10,12};
    int c[12];
    int i=0,j=0,k=0;
    while(i<6 && j<6 && k<12)
    {
        if(a[i]<b[j])
        {
            c[k]=a[i];
            i++;
            k++;
        }
        else 
        {
            c[k]=b[j];
            j++;
            k++;
        }
    }
     for(i=0;i<=6;i++)
        {
            c[k]=a[i];
            k++;
            i++;
        }
     for(j;j<=6;j++)
        {
            c[k]=b[j];
            k++;
            j++;
        }

    int z;
    for( z=0;z<12;z++){
        printf("%d\n",c[z]);
    }
    return 0;
}
