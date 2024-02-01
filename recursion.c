#include <stdio.h>
int factorial(int x);
int main()
{ int a=4;
printf("the value of factorial %d is %d \n ",a,factorial(a));


return 0;
}
int factorial(int x){
    if(x==1 || x==0){               //this condition is must
        return 1;                   //otherwise function running continues
    }
    else{
        
        int result;
        result= x*factorial(x-1);
        return result;
    }
}