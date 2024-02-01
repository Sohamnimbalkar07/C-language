#include <stdio.h>
int main()
{
int num;
int rev=0;
int rem;

printf("enter a number \n");
scanf("%d",&num);
int number = num;

while(num!=0){
    rem = num%10;
    rev = rev*10 + rem;
    num = num/10;
}
printf("reverse number is %d \n",rev);
if(number == rev){
    printf("number is palindrome number");
}
else {
    printf("number is not palindrome number");
 }
return 0;
}