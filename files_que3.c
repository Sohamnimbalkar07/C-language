#include <stdio.h>
int main()
{
FILE *ptr;
ptr= fopen("table.txt","w");
int num;
printf("enter number");
scanf("%d",&num);
for(int i=0;i<10;i++){
    fprintf(ptr, "%d x %d = %d \n", num, i+1, num*(i+1));
}
return 0;
}