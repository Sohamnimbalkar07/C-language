#include <stdio.h>
int main()
{
int number;
int count=0;
printf("enter a number");
scanf("%d",&number);
while(number!=0){
     count++;
     number=number/10;
}
printf("number of digits in a number is %d",count);

return 0;
}