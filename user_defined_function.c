#include <stdio.h>

//sum is function which takes a and b as input and returns an integer as an output
int sum(int a, int b);              //function prototype declaration

int main()
{
int c;
c=sum(5,15);                                        //function call
printf(" the value of c is %d \n",c);        
return 0;


}

int sum(int a, int b){                     //function defination
    int result;
    result =a +b;
    return result;
}