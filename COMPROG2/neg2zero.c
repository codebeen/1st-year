#include<stdio.h> 

int main() { 

    int array[5][5]; 
    int i, j; 
     
    // Input integer number in a 5x5 array 
    for(i = 0; i < 5; i++) { 
        for(j = 0; j < 5; j++) { 
        	printf("Enter an integer number: "); 
        	scanf("%5d", &array[i][j]); 
        } 
    } 

    // Displaying the original array 
    printf("\nOriginal array: \n"); 

    for(i = 0; i < 5; i++) { 
        for(j = 0; j < 5; j++) 
            printf("%5d", array[i][j]); 
        printf("\n"); 
    } 

    // Change all negative values in the array to zero values  
    for(i = 0; i < 5; i++) { 
        for(j = 0; j < 5; j++) { 
            if(array[i][j] < 0) 
                array[i][j] = 0; 
        } 
    } 

    // Displaying of changed array 
    printf("\nChanged array: \n"); 
    
    for(i = 0; i < 5; i++) { 
		for(j = 0; j < 5; j++) 
            printf("%5d", array[i][j]); 
        printf("\n"); 
    } 

    return 0; 

} 