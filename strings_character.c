#include <stdio.h>
void present(char p[]);

int main()
{
char arr[]= "hello";
present(arr);

return 0;
}

void present(char p[]){
    int i;
    char s= 'o';
    int x=0;
    for(i=0;i<6;i++){
        if(s==p[i]){
            x=1;
            break;
        }
    }
    if(x==1){
        printf("character is found and at position %d",i+1);
        }
    else{
        printf("character is not found");

    }
}
