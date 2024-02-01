#include <stdio.h>
int main()
{
int a=4;
int *x=&a;
printf("the address of a is %u \n",x);
x++;
printf("the address of a is %u \n",x);
x--;
printf("the address of a is %u \n",x);
x=x+2;
printf("the address of a is %u \n",x);


return 0;
}

// value of x is increases by 4 because size of integer is 4.
//similarly size of character is 1.