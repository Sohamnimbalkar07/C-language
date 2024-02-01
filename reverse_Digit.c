#include <stdio.h>
int main()
{
int number=1234;
int reverse=0;
int rem;
while(number!=0){
 rem=number%10;
reverse=reverse*10+rem;
 number= number/10;
}
printf("reverse number is %d",reverse);
return 0;
}