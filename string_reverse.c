#include <stdio.h>
#include <string.h>
int main()
{
char str[40];
printf("enter a string to be reverted \n");
scanf("%s",&str);

printf("reversed string is %s",strrev(str));

return 0;
}