#include <stdio.h>
#include <stdlib.h>
int main()
{
int *ptr;
ptr = (int *) malloc(5* sizeof(int));
for(int i=0;i<10;i++){
    ptr[i]= 7*(i+1);
    printf("enter value of 7 X %d \n",ptr[i]);
    
}
printf("after reallocating......... \n");

ptr = realloc(ptr, 15*sizeof(int));
for(int i=0;i<15;i++){
    ptr[i]=7*(i+1);
    printf("enter value of 7 X %d is %d  \n",i+1,ptr[i]);

}

return 0;
}