#include <stdio.h>

int main()
{
     int a,b,*p,*q;
    printf("Enter two numbers:\n");
    scanf("%d%d",&a,&b);
    p=&a;q=&b;
    printf("sum=%d",*p + *q);

    return 0;
}