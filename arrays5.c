#include <stdio.h>
int main()
{
    int marks[4];
    int *ptr;
    ptr = marks;
    for(int i=0;i<4;i++){
        printf("enter a mark of student %d is \n",i+1);
        scanf("%d",ptr);
        ptr++;

    }
        for(int i=0;i<4;i++){
            printf(" marks of student %d is %d \n",i+1,marks[i]);
        }



return 0;
}