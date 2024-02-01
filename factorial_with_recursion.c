#include <stdio.h>
int factorial(int x);

int main()
{int a=5;
 int fact=factorial(a);
printf("factorial of %d is %d", a,fact);
return 0;
}

int factorial(int x)
{   if(x==0){
    return 1;}
    else
    {int result= x* factorial(x-1);
    return result;
    }
    
}
