#include<stdio.h>
int main()
{
    int a ,b;
    a=10;
    b=20;
    printf("a and b is %d and %d",a,b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("a and b %d and %d",a,b);
    return 0;
}
