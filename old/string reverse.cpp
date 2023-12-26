#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
	char str[10];
	char rev;
	printf("enter the string=");
	scanf("%s",&str);
	rev=strrev(str);
	printf("reverse of string=%s",rev);
}
