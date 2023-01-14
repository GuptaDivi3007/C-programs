#include <stdio.h>

int main()
{    
    int a,b,*p,*q,**r;
    a=10;
    b=50;
    p=&a;q=&b;
    printf("%d\n",*p); // %d for printing value
printf("%d\n",*q);
printf("%p\n",p);  // %p is used to print the address 
printf("%p\n",q);
    return 0;
}