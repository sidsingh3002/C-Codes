#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
	char str1[10], str2[20];
	printf("enter the first string=");
	scanf("%s",&str1);
	printf("enter the second string=");
	scanf("%s",&str2);
	strcat(str1,str2);
	printf("new string=%s",str1,str2);
	
}
