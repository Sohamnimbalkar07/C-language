#include <stdio.h>
#include <string.h>

struct employee{
    int code;
    float salary;
    char name[10];
};

int main()
{
struct employee facebook[100];

facebook[0].code= 154;
facebook[0].salary= 456.254 ;
strcpy(facebook[0].name,"soham");

facebook[1].code= 130;
facebook[1].salary= 565.789;
strcpy(facebook[1].name,"atharv");

facebook[2].code= 200;
facebook[2].salary= 654.254 ;
strcpy(facebook[2].name,"rohit");

return 0;
}