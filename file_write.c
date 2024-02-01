#include <stdio.h>
int main()
{
FILE *ptr;
int number= 550;
ptr= fopen("generated.txt","w");
fprintf(ptr,"the number is %d.",number);
fclose(ptr);

return 0;
}