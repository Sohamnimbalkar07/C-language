#include <stdio.h>
int reverse(int *ptr,int n);          //int n is size of array.
int main()
{
int arr[]={1,2,3,4,5,6,7,8,9};
reverse(arr,9);
    for(int i=0;i<9;i++){
printf(" the value of element %d is %d \n",i,arr[i]);
    }
return 0;
}
int reverse(int *ptr,int n){
    int temp;
    for(int i=0;i<(n/2);i++){
        temp= ptr[i];
        ptr[i]=ptr[n-i-1];
        ptr[n-i-1]=temp;
    }
}