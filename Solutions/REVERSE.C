/*write a program to enter any number and print it's reverse*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int number,n;
	clrscr();
	printf("Enter any number:");
	scanf("%d",&number);
	while(number>0)
	{
		n=number%10;
		printf("%d",n);
		number=number/10;
	}
	getch();
}

