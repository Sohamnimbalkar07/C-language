#include <stdio.h>
#include <string.h>

void slice( char *st, int m, int n);

int main()
{
char a[]="helloworld";
slice(a, 1, 9);
printf("%s", a);
return 0;
}

void slice( char *st, int m, int n){
    int i=0;
    while((m+i)<n){
        st[i]= st[i+m];
        i++;
    }
    st[i]='\0';
}
