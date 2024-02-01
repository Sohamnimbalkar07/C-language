#include <stdio.h>
int sum(int p,int q);
int main()
{
int a= 11;
int b = 7;
printf(" sum is %d",sum(a,b));
return 0;
}
int sum(int p,int q)
{   int *ptr = &p;
    int *c= &q;
    int sum = *ptr + *c;
    return sum;
}
