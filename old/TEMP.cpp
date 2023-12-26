#include<stdio.h>
#include<conio.h>
void main()
{
	float celc, faen;
	
	printf("enter temp in faran=");
	scanf("%f",&faen);
	
	celc=((5*(faen-32))/9);
	
	
	printf("temp in celsius is=%f",celc);
	
}
