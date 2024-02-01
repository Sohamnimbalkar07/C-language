#include <stdio.h>
int fibonacci(int i);
int main()
{
    int a=12;
    for(int i = 1;i<=a;i++)
    {
        printf("%d \t",fibonacci(i));
    }
    return 0;
}
int fibonacci(int i)
{
    if(i==1){
        return 0;
    }
    else if(i==2)
    {
        return 1;
    }
    else {
        int result = fibonacci(i-1) + fibonacci(i-2);
        return result;
    }
}
