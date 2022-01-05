/*write a program to enter any number and print in reverse
Date:24-Dec-2021*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c=0;
	clrscr();
	printf("\n Enter a value print in reverse:");
	scanf("%d",&a);
	while(a!=0)
	{
		b=a%10;
		c=c*10+b;
		a=a/10;
	}
	printf("\n Reverse number %d",c);
	getch();
}


