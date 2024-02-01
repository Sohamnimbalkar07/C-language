#include <stdio.h>

typedef struct complex{
    int real;
    int complex;
}comp;

void display (comp c);
int main()
{
comp cnum[5];
for(int i=0;i<5;i++){
    printf("emter the real value of number %d \n",i+1);
    scanf("%d",&cnum[i].real);
    printf("emter the complex value of number %d \n",i+1);
    scanf("%d",&cnum[i].complex);
}
for(int i=0;i<5;i++){
       display(cnum[i]);

}
return 0;
}

void display (comp c){
    printf("the value of real value of %d \n", c.real);
    printf("the value of imaginary value of %d \n", c.complex);
}
