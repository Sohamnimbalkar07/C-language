#include <stdio.h>
void sumandavg(int a, int b,int *sum,int *avg);
int main()
{ int i=4;
int j=6;
int add;
int mean;
sumandavg(i,j,&add,&mean);
printf("sum of i and j is %d \n", add);
printf("average of i and j is %d \n",mean);

return 0;
}

void sumandavg(int a, int b,int *sum,int *avg){
    *sum=a+b;
    *avg=(a+b)/2;
}

