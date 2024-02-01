#include <stdio.h>
#include <string.h>
int main()
{
char s1[]="hello";
char s2[]="world";
char s3[]="world";

int value= strcmp(s1,s2);
int val= strcmp(s2,s3);

printf("value of s1 and s2 is %d \n",value);
printf("value of s2 and s3 is %d",val);

return 0;
}

// if two strings are equal then it gives 0.
// if two strings are different then it gives positive or negative integer.

