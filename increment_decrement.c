#include <stdio.h>
int main()
{ int a=3;
printf("%d %d %d ",a ,++a,a++);   // printf execute from right to left
                                  // but gives output in order you want i.e a,++a,a++
                                  // for a++, a++=3  because ++ is after a. so it print then add.
return 0;                         // then a becomes 4.
}                                  // in ++a, ++a=5, here first add then print so 4+1=5.
                                   // in a, a=5 after executing a++ and ++a, a becomes 5.
// output== (a ++a a++)
// output== (5 5 3)