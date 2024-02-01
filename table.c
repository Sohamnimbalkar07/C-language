#include <stdio.h>
int main()
{int n,i;
printf("enter is  number \n");
scanf("%d", &n);
for(int i =10;i>=1;--i){
    printf("%d * %d= %d \n",n,i,n*i);
}

return 0;
}