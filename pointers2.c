#include <stdio.h>
void printadd(int a);
int main()
{int i=4;
printf("value of i is %d \n",i);
printadd(i);
printf("address of i is %u \n",&i);
return 0;
}
void printadd(int a){
    printf("address of a is %u \n",&a);

}