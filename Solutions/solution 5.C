/* write a program to enter any number and check it is prime numner or not
Date:24-Dec-2021*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int i,no,c=0;
	clrscr();
	printf("\n Enter any number:");
	scanf("%d",&no);
	i=2;
	while(i<no)
	{
		if(no%i==0)
		{
			c=1;
			break;
		}
		i=i+1;
	}
		if(c==1)
		printf("No is not prime:");
		else
		printf("No is prime:");
		getch();
}
