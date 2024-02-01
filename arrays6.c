#include <stdio.h>
void printarray( int *ptr, int n);           // int n= size of array
                                             // int n is used to stop for loop.
int main()
{
    int arr[]={1,5,9,4,7,6,5};
    printarray(arr,7);

return 0;
}
void printarray(int *ptr, int n){
    for(int i=0;i<n;i++){
        printf("the value of element %d is %d \n",i+1,*(ptr+i));
    }
}
