#include <stdio.h>
#include <string.h>

struct employee{
    int code;
    float salary;
    char name[10];
};

int main()
{
struct employee e1;
struct employee *ptr;
ptr= &e1;
// ptr->code =150;       you can also write in this way.
(*ptr).code=150;
printf("%d",e1.code);
return 0;
}
