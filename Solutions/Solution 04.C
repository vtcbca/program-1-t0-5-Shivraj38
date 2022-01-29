
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
		sum=sum+(s*s*s);
		n=n/10;
	}
	if(sum==a)
		printf("Number is Amstrong");
	else
		printf("Number is not Amstrong");
	getch();
}


