#include <stdio.h>
int main()
{
int num;
int square=0;
printf("enter a number \n");
scanf("%d",&num);
for(int i=0;i<num;i++){
    if(i*i==num){
        square=1;
        break;
    }
    }
       
if(square==1){
    printf("given number is perfect square");
}
else{
        printf("given number is not perfect square");

}
return 0;
}