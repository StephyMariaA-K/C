/*Read sequence of integers from the terminal until-1 is read
Output sum of numbers read,not including the negative number*/

#include<stdio.h>
#include<conio.h>
void main()
{
	int a;
	int sum;
	clrscr();
	sum=0;
	printf("enter the num:");
	scanf("%d",&a);
	while(!(a==-1))
	{
		sum=sum+a;
		scanf("%d",&a);

	}
	printf("sum is %d",sum);
	getch();
}

