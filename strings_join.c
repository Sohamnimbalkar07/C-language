#include <stdio.h>
#include <string.h>
int main()
{
char s1[30]="hello";
char s2[]="world";
strcat(s1,s2);
printf("%s",s1);

return 0;
}