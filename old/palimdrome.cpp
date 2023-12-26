#include<stdio.h>
#include<conio.h>
int main()
{
    int i,n,r,s=0;
    
     
    printf("\n  Enter The Number:");    
    scanf("%d",&n);
    for(i=n;i>0; )   
    {
        r=i%10;     
        s=s*10+r;      
        i=i/10;      
    }
    if(s==n){
    	printf("entered no. is palindrome ");
	}
     else{
     	printf("entered no. is not palindrome");
	 }
    
    getch();
}
