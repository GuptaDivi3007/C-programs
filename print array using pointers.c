#include <stdio.h>
// WAP to input and print array elements using pointers
int main()
{
int a[5],i;
int *p;
p=a;
printf("enter the elements in array\n");
for(i=0;i<=4;i++)
{
    scanf("%d",&a[i]);
    
}
for(i=0;i<=4;i++)
{
    printf("%d ",*(p+i));
    
}