#include <stdio.h>
int main()
{
     int a,b,*p,*q,temp;
    printf("Enter two numbers:\n");
    scanf("%d%d",&a,&b);
    printf("Value of a=%d and b=%d before swapping\n",a,b);
    p=&a;q=&b;
    temp=*p;
    *p=*q;
    *q=temp;
    printf("Value of a=%d and b=%d after swapping",a,b);

    return 0;
}