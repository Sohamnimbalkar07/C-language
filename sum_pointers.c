#include <stdio.h>
int main()
{
int p, q ;
int *a=&p, *b=&q;
printf("enter a value of p \n");
scanf("%d",&p);
printf("enter a value of q \n");
scanf("%d",&q);
printf("the sum of a and b is %d",*a+*b);
return 0;
}