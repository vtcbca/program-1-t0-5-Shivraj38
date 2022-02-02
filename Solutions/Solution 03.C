/*loop to enter any number and check it is polidrom or not*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b=0,re,o;
	clrscr();
	printf("enter a number:");
	scanf("%d",&a);
	for(o=a;a|=0;)
	{
		re=a%10;
		b=b*10+re;
		a=a/10;
	}
	if(o==b)
	printf("it is palindrom");
	else
	printf("it is not palindrom");
	getch();
}

