// A program that convert integer value to its binary equivalent

#include<stdio.h>

main(){

	int bin[30],num,a=0,b;
	
	// Input
	printf("Enter a number to convert: ");
	scanf("%d",&num);
	
	// Converting integer value to binary
	a=0;
	while(num>0){
	
		bin[a] =num%2;
		num=num/2;
		a++;
	
	}
	
	// Printing of Output
	printf("Binary equivalent: ");
	
	for(b=a-1;b>=0;b--){
		printf("%d",bin[b]);
	}
	
	printf("\n");
	
	printf("\n\nEnd of program!");
	
	return 0;

}