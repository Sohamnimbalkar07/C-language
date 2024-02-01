#include <stdio.h>
#include <string.h>

int main()
{
char a[]="soham";
char *ptr;
ptr= a;
char temp;
int n =5;
for(int i=0;i<(n/2);i++){
temp = ptr[i];
ptr[i]= ptr[n-i-1];
ptr[n-i-1] = temp;
}
printf("%s",a);

return 0;
}