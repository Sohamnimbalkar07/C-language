#include <stdio.h>
int main()
{
int a=1; int b=5;
int *ptr=&a;
int *ptr1=&b;
printf("%d",*ptr+*ptr1);

return 0;
}