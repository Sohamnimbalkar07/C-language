#include <stdio.h>
int main()
{int n;
int i;
int prime = 0;

    printf("enter   number  ");
    scanf("%d",&n);
    for(int i=2;i<n;i++){
        if(n%i==0){
           prime = 1;
           break;          // if break not use then also program gives right output
            }
        
    }
        if(prime==1){
            printf("number is not prime");
        }
        else{
            printf("number is prime");
        }
        


    
    
    return 0;
}