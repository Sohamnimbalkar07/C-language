#include <stdio.h>
int average(int a, int b, int c);
int main()
{int a;
int b;
int c;
printf("enter a \n");
scanf("%d",&a);
printf("enter b \n");
scanf("%d",&b);
printf("enter c \n");
scanf("%d",&c);
printf(" average is %d \n",average(a, b, c));




return 0;
}
int average(int a, int b, int c){
    int result;
    result= (a+b+c)/3;
    return result;
}