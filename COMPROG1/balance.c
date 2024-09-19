#include<stdio.h>

int main() {

	// Starting Account Balance, Total Deposit, Withdrawal, Current Balance
	float SAB,TD,W,CB; 
  
	printf("Enter your starting account balance: ");
	scanf("%f", &SAB);

	printf("Enter the total amount of deposits made: ");
	scanf("%f", &TD);

	printf("Enter the total amount of withdrawals made: ");
        scanf("%f", &W);

	CB = SAB + TD - W; // computation for current balance

	printf("\nCurrent Balance = %.2f", CB);
	
  return 0;

}