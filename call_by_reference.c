#include <stdio.h>
void swap(int *a, int *b);
int main()
{ 
   int x =5;
   int y =6;
   printf("the value of x and y before swap is %d and %d \n",x,y);            // a is pointer who stores
   swap(&x,&y);                                                               // address of x. 
   printf("the value of x and y after swap is %d and %d \n",x,y);

return 0;
}

void swap(int *a, int *b){
    int temp;
    temp= *a;
    *a = *b;
    *b =temp;
}


/*algorith
a=3            b=4             temp
a=3            b=4             temp=3
a=4            b=4             temp=3
a=4            b=3             temp=3 */


