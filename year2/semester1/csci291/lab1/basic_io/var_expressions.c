#include <stdio.h>

int main(void) {
    int a = 9;

    printf("a = %d\n", a);


    /*makes it negetive now a is -9*/
    a =-a;
    printf("a = %d\n", a);
 
   /*subtracts a from a  so -9 -(-9)*/
    a -= a;
    printf("a = %d\n", a);

   /*now a is 0 so --a subtracts it by 1  so output becomes -1*/
    --a;
    printf("a = %d\n", a);

   /*a==a is gonna always be true so ans gonna be 1*/
    a = (a == a);
    printf("a = %d\n", a);

    return 0;
}

