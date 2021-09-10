#include <stdio.h>
struct student   

{
	 int roll;
	 int phone;
	 char letter;
};
int main ()
{
	struct student bs;
	bs.roll=1;
	bs.phone =7793;
	bs.letter='S';
	
	printf("%d is roll\n",bs.roll);
	printf("%d is phone\n",bs.phone);
	printf("%c is letter\n",bs.letter);
}
