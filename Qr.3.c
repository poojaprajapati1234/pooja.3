#include<stdio.h>
#include<conio.h>

 void main()
 {
 	int x,y,ans;
 	printf("enter x :");
	scanf("%d",&x);
	printf("enter y :");
	scanf("%d",&y);

	ans=(x*x*x)-(y*y*y)-(3*x*x*y)+(3*x*y*y);
	printf("ans=%d",ans);
}
 