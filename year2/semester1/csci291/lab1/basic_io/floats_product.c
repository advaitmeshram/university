#include <stdio.h>

int main(void) {
    float a, b, product;

    printf("enter first floatno : ");
    scanf("%f", &a);

    printf("enter second float no: ");
    scanf("%f", &b);

    product = a * b;
    printf("you entered %.2f and %.2f, product = %.2f\n", a, b, product);

    return 0;
}
