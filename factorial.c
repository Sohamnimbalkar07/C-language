#include <stdio.h>
int main()
{ int fact=1;

int n;
printf("the number is  /n");
scanf("%d",&n);

while(n>=1){
    fact=fact*n;
    --n;
    
}
printf(" the of n natural number is %d \n",fact);
return 0;
}