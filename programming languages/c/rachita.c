#include<stdio.h>
void main()
{
    int a,b;
    printf("enter two no.:");
    scanf("%d",&a);
    scanf("%d",&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf(" the swap is %d%d",a,b);
}