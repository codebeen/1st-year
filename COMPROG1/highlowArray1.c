// With default value of array
// A program that determines the highest and lowest values in an array with 10 elements

#include<stdio.h>

main(){

	int arr[10]={1,4,7,6,8,9,0,50,24,3};
	int a,high=arr[0],low=arr[0];
	
	// Processing
	for(a=0;a<10;a++){
	
		if(arr[a]<low)
			low=arr[a];
		
		if (arr[a]>high)
			high=arr[a];
	
	}
	
	// Printing of output
	printf("The highest number is %d and the lowest number is %d.",high,low);
	
	printf("\n\nEnd of Program!");
	
	return 0;

}