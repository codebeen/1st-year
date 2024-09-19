/* A program that converts hours to minutes and minutes to hours */
#include<stdio.h>


int main() {

	
	int minutes, min2hrs, hrs1, mins, hrs;
    
    printf("===[HOURS TO MINUTES]===");
    printf("\n\nEnter number of hours: ");
    scanf("%d", &hrs);
    
    min2hrs = hrs * 60; // hours to minutes calculation
    
    printf("%d hour/s is %d minute/s.", hrs, min2hrs);
    
    printf("\n\n\n===[MINUTES TO HOURS]===");
    printf("\n\nEnter number of minutes: ");
    scanf("%d", &minutes);
    
    hrs1 = minutes/ 60;   // minutes to hours
    mins = minutes % 60;  // determine the remaining minutes 
    
    printf("%d minute/s is %d hour/s and %d minute/s.\n", minutes, hrs1, mins);
	
	return 0;

}