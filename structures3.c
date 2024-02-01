#include <stdio.h>
#include <string.h>

struct employee{
    int code;
    float salary;
    char name[10];
};

int main()
{
struct employee soham = {100, 34.25, "soham"};
printf("code is %d \n",soham.code);
printf("salary is %f \n",soham.salary);
printf("name is %s \n",soham.name);

return 0;
}