#include <stdio.h>
int count(char p[]);

int main()
{
    int l;
char arr[]= "aaaaaaa";
count(arr);
printf("number of a in given string is %d",count(arr));

return 0;
}

int count(char p[]){
    char s= 'a';
    int l=0;
    char *ptr;
    ptr = p;
    while(*ptr!='\0'){
        if(*ptr==s){
            l++;
            ptr++;
        }
        
    }
    return l;
    
}
