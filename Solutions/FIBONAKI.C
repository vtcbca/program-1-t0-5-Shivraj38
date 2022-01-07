/**/
#include<stdio.h>
#include<conio.h>
void main()
{
	int a=0,b=1,c,number,i;
	clrscr();
	printf("enter any number");
	scanf("%d",&number);
	printf("\n%d %d",a,b);
	for(i=2;i<number;++i)
	{
		c=a+b;
		printf(" %d",c);
		a=b;
		b=c;
	}
	getch();
}
