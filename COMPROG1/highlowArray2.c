// with input
// A program that determines the highest and lowest values in an array with 10 elements

#include<stdio.h>

main(){

	int arr[10];
	int a,high,low;
	
	// Input
	printf("Enter 10 numbers: \n");
	for(a=0;a<10;a++)
		scanf("%d",&arr[a]);
	
	// Set initial value for highest and lowest
	high=arr[0],low=arr[0];
	
	// Processing
	for(a=0;a<10;a++){
	
		if(arr[a]>high)
			high=arr[a];
		
		if(arr[a]<low)
			low=arr[a];
	}
	
	// Printing of output
	printf("\nThe highest value is %d.",high);
	
	printf("\nThe lowest value is %d.",low);
	
	printf("\n\nEnd of Program!");
	
	return 0;

}