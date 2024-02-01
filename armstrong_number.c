#include <stdio.h>
int main()
{
int number;
int sum= 0;
int rem;
printf("enter a number \n");
scanf("%d",&number);
int temp = number; 

while(number!=0){
    rem = number%10;
    sum= sum + ( rem*rem*rem);
    number = number/ 10;
}
if (temp == sum){
    printf("given number is armstrong number");
}
else{
    printf("given number is not armstrong number");
}

return 0;
}