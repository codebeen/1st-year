// A program that checks if an array is a subset of another array

#include<stdio.h>

main(){
	
	int array1[10], array2[5];
	
	int i, j, sub,size1,size2;
	
	// sub variable is initially set to 1 to assumes that array2 is a subset of array1
	sub=1;
	
	// Input
	printf("Enter a size for array 1 (maximum of 10): ");
	scanf("%d",&size1);
	
	//check if the input size is greater than 10
	if(size1>10){
		printf("\nEnd of Program!");
		goto stop;
	}
	
	printf("Enter %d integers for array 1:\n",size1);
	for(i=0;i<size1;i++){
		scanf("%d",&array1[i]);
	}
	
	printf("Enter a size for array 2 (maximum of 5): ");
	scanf("%d",&size2);
	
	//check if the input size is greater than 5
	if(size2>5){
		printf("\nEnd of Program!");
		goto stop;
	}
	
	printf("Enter %d integers for array 2:\n",size2);
	for(i=0;i<size2;i++){
		scanf("%d",&array2[i]);
	}
	
	// Check if each element of arr2 is in arr1
	for(i=0;i<5;i++){
		int found = 0;
		
		for(j=0;j<10;j++){
			if(array2[i]==array1[j]){
				found=1;
				break;
			}
		}
	
		if(!found){
			sub=0;
			break;
		}
	}
	
	// Printing of output
	if(sub!=0){
		printf("Array 2 is a subset of Array 1\n");
	} else{
		printf("Array 2 is not a subset of Array 1\n");
	}
	
	printf("\n\nEnd of program!");
	
stop:
	
	return 0;

}