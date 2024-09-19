#include<stdio.h>

main() {

    int var;
    float xx,yy;
    
    printf("Enter first number: ");
    scanf("%f",&xx);
    printf("Enter second number: ");
    scanf("%f",&yy);    

//Selecting of operation to be used
    printf("\nOperations");
    printf("\n1. +\n2. -\n3. *\n4. /\n");
    printf("Select an operation: ");
    scanf("%d",&var);    

//Conditions for selecting an operation
    if(var<0 || var>5)
        printf("Input Error!");        

//Processing
    switch(var) {
    	case 1:
        	printf("%.2f + %.2f = %.2f",xx,yy,(xx+yy));
        	break;
    	case 2:
        	printf("%.2f - %.2f = %.2f",xx,yy,(xx-yy));
        	break;
    	case 3:
        	printf("%.2f * %.2f = %.2f",xx,yy,(xx*yy));
        	break;
    	case 4:
        	if(yy!=0)
            	printf("%.2f / %.2f = %.2f",xx,yy,xx/yy);
        	else {
            	printf("%.2f / %.2f = Undefined",xx,yy);
            }    
        	break;
    	default:
        	printf("Operation can't be performed.");
        	break;
    }

    
    return 0;

}