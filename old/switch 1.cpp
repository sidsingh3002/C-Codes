#include<stdio.h>
#include<conio.h>
int main()
{
	int i,a,b;
	float c,s,m,mo;
	printf("enter first no. = ");
	scanf("%d",&a);
	printf("enter second no. = ");
	scanf("%d",&b);
	printf("enter uour choice");
	scanf("%d",&i);
	
	switch(i)
	{
		case 1:
			c=a+b;
			printf("addition=%f",c );
			break;
		case 2:
			s=a-b;
			printf("substraction=%f",s);
			break;
		case 3:
			m=a*b;
			printf("multiplication=%f",m);
			break;
		case 4:
			mo=a%b;
			printf("modulus=%f",mo);
			break;
		default:
			printf("entred wrong choice");
			
	 } 
	 getch();
}
