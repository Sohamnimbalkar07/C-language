#include <stdio.h>
int main()
{
FILE *ptr;
char c;
ptr = fopen("getcdemo.txt","r");
c= fgetc(ptr);

while(c!=EOF){                     // EOF= end of file.
    printf("%c",c);
    c= fgetc(ptr);
}
return 0;
}