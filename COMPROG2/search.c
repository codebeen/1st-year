#include<stdio.h> 

int main() { 

    int i, n, numSearch, occur = 0; 

    // Input number of elements in the list 
    printf("Enter the number of elements in the list: "); 
    scanf("%d", &n); 

    printf("\n"); 

    int x[n]; 

    // Input integer values into an array 
    for(i = 0; i < n; i++) { 
        printf("Enter a number: "); 
        scanf("%d", &x[i]); 
    } 


    // Display the integer values inside the array 
    printf("\nList contains: "); 

    for(i = 0; i < n; i++) 
        printf("%d  ", x[i]); 
		    

    // Input number to be search 
    printf("\nEnter number to be searched: "); 
    scanf("%d", &numSearch); 

     
    // Count the number of occurrence of the number to be searched 
    for(i = 0; i < n; i++) {     
        if(x[i] == numSearch) 
            occur++; 
    } 
  

    // Display the number of occurrence 
    printf("\nThere is/are %d occurrence of number %d.", occur, numSearch); 


    return 0; 

} 