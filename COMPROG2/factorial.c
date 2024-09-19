#include<stdio.h>

int factorial(int n) {
	int fact = 1;

	for(int i = 1; i <= n; i++) {
		fact = fact * i;
	}
	
	return fact;

}

int main() {

	int n;
	
	printf("FACTORIAL OF AN INTEGER VALUE\n");
	printf("-----------------------------\n");
	
	printf("\nEnter a number: ");
	scanf("%d", &n);
	
	while(n != 0) {
		
		if(n == 0) {
			break;
		}
		
		printf("The factorial of %d is %d.", n, factorial(n));
		
		printf("\nEnter a number: ");
		scanf("%d", &n);
	}
	
	printf("\n\nEnd of Program!\n");
	printf("------------------------------");

return 0;

}