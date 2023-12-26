#include<stdio.h>
#include<conio.h>
int main()
{
  int a,b,c,e=4,D,E,F;
  printf("enter a,b,c from a quadratic equation ax^2+bx+c\n");
  scanf("%d%d%d",&a,&b,&c);
  D=b*b;
  E=e*a*c;
  F=D-E;
  printf("discriminant is = %d\n",F);
  
  if(F>0)
  {
	printf("roots are real and distinct\n");
  }
  else{
  	printf("no");
  }
  //printf("F=0?roots are equal:roots are complex");
  getch();
}
