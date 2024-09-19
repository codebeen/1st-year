#include<stdio.h>
#include<math.h>

int main() {

	int power;
	double result;
	
	printf("\tBase 2\n");
	printf("Power\t\tResult\n");
	
	for(power = 0; power <= 10; power++) {
		double result = pow(2, power);
		printf("%3d\t\t%3.0lf\n", power, result);
	}
	
	printf("\n\nEnd of Program!\n");
	printf("------------------------------");

return 0;

}