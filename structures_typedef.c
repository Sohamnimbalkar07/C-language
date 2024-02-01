#include <stdio.h>
#include <string.h>

typedef struct employee{
    int code;
    float salary;
    char name[10];
}emp;

void show(emp emp1);


int main()
{
emp e1;
e1.code= 300;
e1.salary= 234.54;
strcpy(e1.name,"soham");

show(e1);
return 0;
}

void show(emp emp1){
    printf(" the code of employee is %d \n",emp1.code);
    printf(" the salary of employee is %f \n",emp1.salary);
    printf(" the name of employee is %s \n",emp1.name);
}                                    
