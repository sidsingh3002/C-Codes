#include <stdio.h>
int main()
{
    int a, b, c;
    printf("enter DD/MM/YYYY");
    scanf("%d%d%d", &a, &b, &c);
    printf("%d/%d/%d", a, b, c);
    printf("Day-%d,Month-%d,Year-%d", a, b, c);
    return 0;
}