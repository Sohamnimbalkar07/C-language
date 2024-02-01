#include <stdio.h>
int fibonacci(int x);
int main()
{ int a;
int n=11;
for(int a=1;a<=n;a++){
printf("the value of fibonacci series %d is %d \n ",a,fibonacci(a));
}



return 0;
}
int fibonacci(int x){
    
    int result;
    if(x==1){
        return 0;
    }
    else if(x==2){
        return 1;
    }
    else{
        
    
        result= fibonacci(x-1)+fibonacci(x-2);
        return result;
    }
}