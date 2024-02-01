#include<stdio.h>
int main()
{ int num = 11;
int rem;
int rev = 0;
int number = num;
while(num != 0)
    {
      rem = num%10;
      rev = rev*10 + rem;
      num = num/10;
    }
  if(number == rev){
    printf("number is palindrome number");
}
else {
    printf("number is not palindrome number");
 }
  return 0;
    
}