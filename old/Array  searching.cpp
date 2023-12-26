#include<stdio.h>
#include<conio.h>
int main()
{
	int a[10],i,s,f=0;
	for(i=0;i<10;i++)
	{
		printf("\n enter no.=");
		scanf("%d",&a[i]);
	}
	printf("\n enter the no. to be searched=");
	scanf("%d",&s);
	for(i=0;i<=10;i++)
	{
		if(a[i]==s)
		{
			printf("element present at position=%d",i);
			f=1;
			
		}
	}
	if(f==0)
	{
		printf("\n element not found");
	}
}
