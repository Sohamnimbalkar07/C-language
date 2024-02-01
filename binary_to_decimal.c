#include <stdio.h>
int main()
{
int binary;
int decimal = 0;
int weight = 1;
int remainder;

printf("enter a binary number \n");
scanf("%d", &binary);
while(binary!=0)
{
remainder = binary % 10;
decimal = decimal + remainder*weight;
binary = binary / 10;
weight = weight*2;
}
printf("decimal number is %d ", decimal);

return 0;
}