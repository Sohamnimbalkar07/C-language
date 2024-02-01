#include <stdio.h>
int main()
{
FILE *ptr;
int n1, n2, n3;
ptr= fopen("filesque.txt","r");
fscanf(ptr, "%d", &n1);
fscanf(ptr, "%d", &n2);
fscanf(ptr, "%d", &n3);

printf("the number 1 is %d \n",n1);
printf("the number 2 is %d \n",n2);
printf("the number 3 is %d \n",n3);


return 0;
}