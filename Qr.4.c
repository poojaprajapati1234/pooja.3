#include<stdio.h>
#include<conio.h>

 void main()
{
	int x=10,y=18,temp;

	printf("enter x :");
	scanf("%d",&x);
	printf("enter y :");
	scanf("%d",&y);
	temp=x;
	x=y;
	y=temp;
	printf("value x:%d\n",x);
	printf("value y:%d",y);
}