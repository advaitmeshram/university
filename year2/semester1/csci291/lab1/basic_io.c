#include <stdio.h>

int main(void){
   int x, y, sum ;
   float a, b , product ;
   char ch;

   // 4.1 (a) integers
   printf("enter first integer: ");
   scanf("%d",&x );
   printf(" enter second integer :");
   scanf("%d",&y);
   sum = x+y ;
   printf("you entered %d and %d , sum = %d\n\n", x, y ,sum);

   // 4.1 (b) floats
   printf("enter first float:");
   scanf("%f",&a );
   printf("enter second  float : ");
   scanf("%f",&b);
   product = a*b ;
   printf("you entered %.2f and  %.2f , product = %.2f\n\n",a ,b ,product );

   // 4.1 (c) character
   printf("enter a  character :");
   scanf(" %c",&ch); // space before %c 
   printf("char printed twice: %c  %c\n\n",ch ,ch );

   // 4.2 variable stuff
   int var=9;
   printf("start var = %d\n", var );

   var = -var ;
   printf("after var = -var   %d\n", var);

   var -= var ;
   printf("after var -= var  %d\n", var);

   --var ;
   printf("after --var  %d\n",var );

   var = (var == var) ;
   printf("after var = (var == var)   %d\n", var );

   return 0 ;
}

