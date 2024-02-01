#include <stdio.h>
int sum(int a,int b);
int main()
{
    int a=4;
    int b=7;
    printf("the value of a and b is %d and %d \n",a,b);
    printf("the sum of a and b is %d \n",sum(a,b));
    printf("the value of a and b after function call is %d and %d \n",a,b);
    // we cant change value of a and b. line 7 and 9

return 0;
}
int sum(int a,int b){
    int c;
    c=a+b;
    a=1;
    b=2;
    return c;
}

//a=3            b=4             temp
//a=3            b=4             temp=3
//a=4            b=4             temp=3
//a=4            b=3             temp=3