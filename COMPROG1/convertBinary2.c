// A program that convert integer value to its binary equivalent

#include<stdio.h>

main(){

	int bin[30],num,a,b;
	
	do{
	
		// Input
		printf("Enter a number to convert: ");
		scanf("%d",&num);
		
		if(num==0)
			break;
		
		// Converting integer value to binary
		if(num!=0){
			for(a=0;num>0;a++){
				bin[a]=num%2;
				num=num/2;
			}
		
			// Printing of output
			printf("Binary Equivalent: ");
			for(b=a-1;b>=0;b--){
				printf("%d",bin[b]);
			}
		
		}
		
		printf("\n");
	
	} while(1);
	
	printf("\n\nEnd of program!");
	
	return 0;

}