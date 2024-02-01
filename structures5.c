#include <stdio.h>
#include <string.h>

struct employee{
    int code;
    float salary;
    char name[10];
};

void show(struct employee emp);


int main()
{
struct employee e1;
e1.code= 150;
e1.salary= 234.54;
strcpy(e1.name,"soham");

show(e1);
return 0;
}

void show(struct employee emp){
    printf(" the code of employee is %d \n",emp.code);
    printf(" the salary of employee is %f \n",emp.salary);
    printf(" the name of employee is %s \n",emp.name);
}
