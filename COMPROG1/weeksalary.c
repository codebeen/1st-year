#include<stdio.h>

int main() {
  
    float hpr, slry; // hour per rate, salary
    int hrs; // number of hours worked
    
    printf("Enter hourly pay rate: ");
	  scanf("%f", &hpr);
  
    printf("Enter number of hours you worked for the week: ");
  	scanf("%d", &hrs);

  	slry = hpr*hrs; // computation for salary
  
    printf("\nYour pay for the week is %0.2f.", slry);
  
    return 0;

}