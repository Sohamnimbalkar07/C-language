#include <stdio.h>
int main()
{
    int a=3;
    int b=4;
    printf("the value of a and b is %d and %d \n",a,b);
    a=b;
    b=a;
    printf("the value of a and b is %d and %d \n",a,b);

return 0;
}