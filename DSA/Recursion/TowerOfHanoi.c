#include<stdio.h>
void towerOfHanoi(int n, char s, char d, char h)
{
    if (n == 1)
    {
        printf("\n Move disk 1 from rod %c to rod %c", s, d);
        return;
    }
    towerOfHanoi(n-1, s, h, d);
    printf("\n Move disk %d from rod %c to rod %c", n, s, d);
    towerOfHanoi(n-1, h, d, s);
}
int main()
{
    int n ; 
    printf("No of disks ");
    scanf("%d",&n);
    towerOfHanoi(n,'s','d','h'); 
    return 0;
}
//output
No of disks 3

 Move disk 1 from rod s to rod d
 Move disk 2 from rod s to rod h
 Move disk 1 from rod d to rod h
 Move disk 3 from rod s to rod d
 Move disk 1 from rod h to rod s
 Move disk 2 from rod h to rod d
 Move disk 1 from rod s to rod d
--------------------------------
Process exited after 2.101 seconds with return value 0
Press any key to continue . . .

