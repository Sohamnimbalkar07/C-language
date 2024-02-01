#include <stdio.h>
int fibonacci(int x);
int main()
{
    int a,n;

printf("enter a number \n");
scanf("%d",&n);
for( int a=1;a<=n;a++){
    
    
    printf("%d \n",fibonacci(a));
    }
        
}

int fibonacci(int x){ fibonacci;
    int result;
    
    if(x==1){
        
        return 0;
    }
    else if(x==2){
        
        return 1;}
        else {
            result= fibonacci(x-1)+fibonacci(x-2);
            return result;

        }
        


    
}
    

