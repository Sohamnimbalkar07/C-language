#include <stdio.h>
int sum(int x);
int main()
{ int a=10;
printf("the value of sum %d is %d \n ",a,sum(a));


return 0;
}
int sum(int x){
    if(x==1 || x==0){
        return 1;
    }
    else{
        
        int result;
        result= x+sum(x-1);
        return result;
    }
}