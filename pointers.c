#include <stdio.h>
int main()
{
int i=40;
int *j=&i;
int **r = &j;


printf("the value of i is %d \n",i);
printf("the value of i is %d \n",*j);
printf("the address of i is %u \n",&i);
printf("the address of i is %u \n",j);
printf("the value of j is %d \n",&i);
printf("the value of j is %d \n",*(&j));
printf("the address of j is %u \n",&j);
printf("the value of r is %d \n",r);
printf("the address of r is %d \n",&r);


return 0;
}