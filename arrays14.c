#include <stdio.h>
int main()
{
    int arr[3][10];
    for(int i=0;i<10;i++){
        printf("%d \n",arr[0][i]=2*(i+1));
    }
    for(int i=0;i<10;i++){
        printf("%d \n",arr[1][i]=7*(i+1));
    }
    for(int i=0;i<10;i++){
        printf("%d \n",arr[2][i]=9*(i+1));
    }

return 0;
}