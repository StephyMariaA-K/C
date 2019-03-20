/*Read 2 numbers and find its gcd and output*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int a;
	int b;
	int c;
	clrscr();
	printf("Enter 2 numbers");
	scanf("%d %d",&a,&b);
	if(a<b)
	{
		c=a;
		a=b;
		b=c;

	}
	while(!(b==0))
	{
		c=a;
		a=b;
		b=c%b;
	}
	printf("GCD=%d",a);
	getch();
}