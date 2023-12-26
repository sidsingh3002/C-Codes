#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
	char str1[10], str2[10];
	printf("enter first string= ");
	scanf("%s",&str1);
	printf("enter second string= ");
	scanf("%s",&str2);
	strcpy(str1,str2);
	printf("\n sirst string=%s",str1);
	printf("\n second string=%s",str2);
	
}
