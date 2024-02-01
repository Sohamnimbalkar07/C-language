#include <stdio.h>
int ten(int *a);
int main()
{int x=4;
printf("the value of x is %d \n",x);
ten(&x);
printf("10 times of x is %d \n",x);

return 0;
}
int ten(int *a){
    
    int b=*a;
    b=10* b;
    *a=b;
         

}
