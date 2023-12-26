#include<stdio.h>
#include<conio.h>
int main()
{
	int a[5];
	int i,j,temp;
	printf("enter 5 elements");
	for(i=0;i<=4;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("array before sorting");
	for(i=0;i<=4;i++)
	{
		printf("%d\t",a[i]);
	}
	for(i=1;i<=4;i++)
	{
		temp=a[i];
		j=i-1;
		while(j>=0&&a[j]>temp)
		{
			a[j+1]=a[j];
			j--;
		}
		a[j+1]=temp;
	}
	printf("\n Array after sorting");
	for(i=0;i<=4;i++)
	{
		printf("%d\t",a[i]);
	}
}
