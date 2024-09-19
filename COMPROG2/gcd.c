#include<stdio.h>

int gcd(int no1, int no2) {
	int i, greatcd;
	
	for(i = 1; i <= no1 && i <= no2; i++) {
		if(no1%i == 0 && no2%i == 0) {
			greatcd = i;	
		}
	}

	return greatcd;
}

int main() {

	int no1, no2;
	
	printf("GREATEST COMMON DIVISOR OF TWO NUMBERS\n");
	printf("--------------------------------------\n");
	
	while(1) { // to repeatedly ask the user for input until a zero value is entered
	
		printf("\nEnter the first number: ");
		scanf("%d", &no1);
		if (no1 == 0) // ends the program if zero value is entered
			break;
		
		printf("Enter the second number: ");
		scanf("%d", &no2);
		if (no2 == 0) // ends the program if zero value is entered
			break;
		
		printf("The Greatest Common Divisor of %d and %d is %d.\n", no1, no2, gcd(no1, no2));	
	}
	
	printf("\n\nEnd of Program!\n");
	printf("------------------------------");

return 0;

}