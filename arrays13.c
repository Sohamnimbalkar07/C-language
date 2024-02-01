// counting positive and negative elements in arrayg

#include <stdio.h>
int main()
{
    int n;
    int a[10];
    int positive=0;
    int negative=0;
    printf("enter a size of an array \n");
    scanf("%d",&n);
    printf("enter elements in array \n");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
        for(int i=0;i<n;i++){
if(a[i]>0){
    positive++;
}
else{
    negative++;
}
}
printf("number of positive integers in array is %d \n",positive);
printf("number of negative integers in array is %d \n",negative);


return 0;
}