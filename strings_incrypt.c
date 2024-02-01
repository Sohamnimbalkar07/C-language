#include <stdio.h>
void incrypt( char a[]);

int main()
{
    char arr[]= "soham";
    incrypt( arr);
    printf(" incrypted string is %s", arr);

return 0;
}

void incrypt( char a[]){
    char *ptr;
    ptr=a;
    while(*ptr!='\0'){
        *ptr= *ptr+1;
        ptr++;
    }
}
