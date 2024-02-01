#include <stdio.h>
int main()
{
int a[10]={1,2,3,4,5,6,7,8,9,10};
int *ptr = &a[0];         // this also works
// int *ptr;             // this also works
// ptr=a;
printf("the value of element 4 is %d",ptr[3]);


return 0;
}