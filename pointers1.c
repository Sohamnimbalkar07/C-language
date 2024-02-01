#include <stdio.h>
int main()
{
    int a=5;
    int*x=&a;
    printf("the value of address of a is %u \n",x);
    printf("the value of address of a is %u \n",&a);
    printf("the value of a is %d \n",*x);

    

return 0;
}