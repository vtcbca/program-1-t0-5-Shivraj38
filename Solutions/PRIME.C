/*writ a programm to check a number it is prime or not*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int a,i,b=0;
	clrscr();
	printf("enter number to check it is prime or not");
	scanf("%d",&a);
	for(i=2;i<=a/2;++i)
	{
		if(a%i==0)
		{
			b=1;
			break;
		}
	}
	if(b==0)
		printf("%d is a prime number.",a);
	else
		printf("%d is not a prime number.",a);
	getch();
}
