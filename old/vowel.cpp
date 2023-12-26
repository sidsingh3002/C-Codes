#include<stdio.h>
#include<conio.h>
int main()
{
	char vov;
	printf("enter the alphabet=");
	scanf("%c",&vov);
	if(vov=='a'||vov=='e'||vov=='i'||vov=='o'||vov=='u')
	{
		printf("enered alphabet is vowel");
	}
	else
	{
		printf("consonant");
		
	}
}
