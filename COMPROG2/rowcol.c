#include <stdio.h> 

int main() { 

    int array[5][5]; 
    int i, j; 
    int sumRow[5] = {0}; 
    int sumCol[5] = {0}; 

 
    // Input integer value in a 5x5 array 
    for(i = 0; i < 5; i++) {
        for(j = 0; j < 5; j++) { 
			printf("Enter an integer number: "); 
            scanf("%d", &array[i][j]); 
        } 
	}

         

    // Printing of array values 
    printf("\n"); 
    printf("The array values are: \n"); 

    for(i = 0; i < 5; i++) { 
        for(j = 0; j < 5; j++) 
            printf("%5d", array[i][j]); 
        printf("\n"); 
    } 

     

    // Calculating the sum of rows and sum of columns 
    for(i = 0; i < 5; i++) {     
        for(j = 0; j < 5; j++) { 
            sumRow[i] += array[i][j]; 
            sumCol[j] += array[i][j]; 
        } 
    } 

     

    // Printing the sum of rows 
    printf("\nSum of Rows\n"); 
    
    for(i = 0; i < 5; i++) 
        printf("%5d\n", sumRow[i]); 


    // Printing the sum of columns 
    printf("\nSum of Columns\n"); 
    for(j = 0; j < 5; j++) 
        printf("%5d\n", sumCol[j]); 


    // Check if all row sums are equal 
    int rowEqual = 1; // assume that all row sums are equal

    for(i = 1; i < 5; i++) { 
        if(sumRow[i] != sumRow[i-1]) { 
            rowEqual = 0; // not equal 
            break; 
        } 
    } 

    // Printing  
    if(rowEqual) 
        printf("\nRow sums are equal."); 
    else { 
        printf("\nRow sums are not equal."); 
    } 

     

    // Check if all column sums are equal 
    int colEqual = 1; // assume that all column sums are equal 

    for(j = 1; j < 5; j++) { 
        if(sumCol[j] != sumCol[j-1]) { 
            colEqual = 0; // not equal 
            break; 
        } 
    } 

    // Printing  
    if(colEqual) 
        printf("\nColumn sums are equal."); 
    else { 
        printf("\nColumn sums are not equal.\n"); 
    } 

    return 0; 

} 