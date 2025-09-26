#include <stdio.h>

int main(void) {
    float celsTemp;   /* Celsius temperature */
    float fahrTemp;   /* Fahrenheit temperature */

    printf("Enter temp in celsius: ");
    scanf("%f",&celsTemp);

    fahrTemp = 1.82 *celsTemp +32;
    printf("Temp in fahrenheit = %.1f\n",fahrTemp);

    return 0;
}
/*OUTPUT
Enter temp in celsius: 0
Temp in fahrenheit = 32.0*/
