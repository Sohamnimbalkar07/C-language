#include <stdio.h>
void printarray( int ptr[], int n);           // int n= size of array
                                             // int n is used to stop for loop.
int main()
{
    int arr[]={1,5,9,4,7,6,5};
    printarray(arr,7);
    arr[4]=3333;
    printf("the value of arr[4] is %d \n",arr[4]);
    printarray(arr,7);

    

return 0;
}
void printarray( int ptr[], int n){
    
    for(int i=0;i<n;i++){
        printf("the value of element %d is %d \n",i+1,ptr[i]);
    }
    ptr[2]=5555;
    printf("the value of arr[2] is %d \n",ptr[2]);
    
}
