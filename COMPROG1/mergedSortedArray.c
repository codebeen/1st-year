// A program that merge to sorted array into one sorted array

#include<stdio.h>

main(){

	int arr1[5], arr2[5], merged_arr[10];
	int i,j,k,l,temp;
	
	//Input for array 1
	printf("Enter 5 numbers for array 1:\n");
	for(i=0;i<5;i++){
		scanf("%d",&arr1[i]);
	}
	
	// Sortind array 1
	printf("Sorted Array 1: ");
	
	for(i=0;i<5;i++){
		
		for(j=i+1;j<5;j++){
			
			if(arr1[i]>arr1[j]){
				temp=arr1[i];
				arr1[i]=arr1[j];
				arr1[j]=temp;
			}
			
		}
		
		printf("%d ",arr1[i]);
	}
	
	// Input for array 2
	printf("\n\nEnter 5 numbers for array 2:\n");
	for(i=0;i<5;i++){
		scanf("%d",&arr2[i]);
	}
	
	// Sorting array 2
	printf("Sorted Array 2: ");
	
	for(i=0;i<5;i++){
	
		for(j=i+1;j<5;j++){
	
			if(arr2[i]>arr2[j]){
				temp=arr2[i];
				arr2[i]=arr2[j];
				arr2[j]=temp;
			}
		}
	
		printf("%d ",arr2[i]);
	}
	
	// Merging and sorting the sorted array 1 and sorted array 2
	i=0,j=0,k=0;
	
	while (i<5&&j< 5) {
	
		if (arr1[i]<arr2[j]) {
			merged_arr[k] = arr1[i];
			i++;
		} else {
			merged_arr[k]=arr2[j];
			j++;
		}
		
		k++;
	}
	
	while(i < 5) {
		merged_arr[k]=arr1[i];
		i++;
		k++;
	}
	
	while(j<5) {
		merged_arr[k]=arr2[j];
		j++;
		k++;
	}
	
	// Printing of output
	printf("\n\nMerged and Sorted Array: ");

	for(l=0;l<10;l++) {
		printf("%d ",merged_arr[l]);
	}
	
	printf("\n\nEnd of program!");

return 0;

}