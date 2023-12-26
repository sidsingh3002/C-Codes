#include<stdio.h>
#include<conio.h>
int main()
{
	int x,i;
	printf("enter the no.");
	scanf("%d",&x);
	for(i=1;i<=10;i++)
	{
		 printf("%d*%d=%d\n" ,x,i,x*i);
	}
}
