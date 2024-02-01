#include <stdio.h>
int main()
{
int a[10];
int greatest=0;
printf("enter a numbers \n");
for(int i=0; i<10; i++){
    scanf("%d",&a[i]);
}
for(int i=0; i<10; i++){
    if(a[i]>greatest){
        greatest=a[i];
    }
}
printf("greastest number is %d",greatest);
return 0;
}