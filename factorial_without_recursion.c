#include <stdio.h>
int main()
{
int number=4, fact=1;
for(int i =1;i<=number;i++){
  fact= fact *i;
}
printf("%d",fact);
return 0;
}