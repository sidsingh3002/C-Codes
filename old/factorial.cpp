#include<stdio.h>
#include<conio.h>
int main()
{
	int i,n,fac;
	printf("enter the no.=");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		fac=fac*i;
	}
	printf("factorial of no. is=%d",fac);
}
