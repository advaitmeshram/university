#include <stdio.h> /* give access to the stdio.h library */
#define CONV_FACTOR (5.0/9) /* definition of a constant */
int main(void)
{
float celsTemp; /* celsius - variable declaration */
float fahrTemp; /* fahrenheit - variable declaration */
printf("Enter the temperature in Fahrenheit:");
scanf("%f", &fahrTemp );
/*FOR PART B CHANGING IT TO printf("Wrong type: %d\n", celsTemp); , 
ERROR BECAUSE %d expects an integer, but celsTemp is a float. */
celsTemp = CONV_FACTOR * (fahrTemp - 32); /*convert to celsius */
printf("Celsius temperature =%.1f \n" , celsTemp);
  /* FOR PART B You can change it to:printf("Two decimals: %.2f\n", celsTemp);*/
return 0;
}
1
