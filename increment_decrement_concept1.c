#include <stdio.h>
int main()
{
    for(int i=0;i<6;i++){
    printf( "the value of i is %d \n",i);
}
for(int a=0;a<=6;a++){
    printf( "the value of a is %d \n",a++);
}
for(int x=0;x<=6;x++){
    printf( "the value of x is %d \n",x+1);
}
for(int p=0;p<=6;p++){
    printf( "the value of p is %d \n",p);
    p=p + 1;
}
for(int s=0;s<=6;++s){
    printf( "the value of s is %d \n",s);
    s=s + 1;
}

return 0;
}