#include <stdio.h>
int side(int a);
int main()
{
    int area;
area = side(3);
printf(" area is %d",area);


return 0;
}
int side(int a){
    
    int result;
    result=a*a;
    return result;
}