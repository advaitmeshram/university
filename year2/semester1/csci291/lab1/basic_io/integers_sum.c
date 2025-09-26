#include <stdio.h>

int main(void) {
    int x, y, sum;

    printf("enter first no: ");
    scanf("%d", &x);

    printf("enter second no: ");
    scanf("%d", &y);

    sum = x + y;
    printf("you entered %d and %d, sum = %d\n", x, y, sum);

    return 0;
}
