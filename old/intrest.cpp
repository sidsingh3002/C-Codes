#include<stdio.h>
#include<conio.h>
int main()
{
	int p,r,t;
	float i;
	printf("enter the principle=");
	scanf("%d",&p);
	printf("enter the rate of intrest=");
	scanf("%d",&r);
	printf("enter the time=");
	scanf("%d",&t);
	
	i=(p*r*t)/100;
	printf("interst=%f",i);
	getch();
	
}
