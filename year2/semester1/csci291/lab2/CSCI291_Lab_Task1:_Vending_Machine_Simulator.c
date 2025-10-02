#include <stdio.h>

int main()
{ int choice;
  printf("Purchase a product\n");
  printf("Admin mode \n");
  printf("Exit\n"); 
  scanf("%d",&choice);
  int option2;
  float cost;
  float money;
  printf("Product A candy cost:[2.00] AED\n");
  printf("Product B chips cost:[3.50] AED\n");
  printf("Product C water cost:[1.00] AED\n");
  printf("choose one option from 1 to 3 for purchasing ");
  printf("choose 0 to cancel the purchase");
  scanf("%d",&option2);
    
/*after if statements n shi
if cash given is less then transactions should not work 
payment will be done by inserting 1 , 0.5,0.25 coins one at a time we have to cummilatively add all the amount */
      printf("enter money");
      printf("enter coins 1,0.5,0,25");
      scanf("%f",&money);
      printf("take yo product and left over money");

    return 0;
}
