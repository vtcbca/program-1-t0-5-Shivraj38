/*loop to enter any number and ptint sum at its digits*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int n,s,sum=0,a;
	clrscr();
	printf("Enter any number:");
	scanf("%d",&n);
	a=n;
	while(n>0)
	{
		s=n%10;
		sum=sum+s;
		n=n/10;
	}
	printf("%d",sum);
	getch();
}

