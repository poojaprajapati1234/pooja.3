#include<stdio.h>
#include<conio.h>

 void main()
{
	int x=13,y=19;

	printf("enter x :");
	scanf("%d",&x);
	printf("enter y :");
	scanf("%d",&y);
	x=x+y;
	y=x-y;
	x=x-y;
	printf("value x:%d \n",x);
	printf("value y:%d",y);
}