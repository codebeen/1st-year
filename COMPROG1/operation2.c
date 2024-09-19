#include<stdio.h>

main() {
    int var;
    float xx,yy;    

//Selecting of operation to be used
    printf("1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n");
    printf("Select an operation:");
    scanf("%d",&var);
    
//Conditions for selecting an operation
    if(var>=1 && var<=4) {   
        printf("Enter first number: ");
        scanf("%f",&xx);
        printf("Enter second number: ");
        scanf("%f",&yy);
    }
    else {   printf("Input Error!");
        goto stop;
    }    

//Processing

    switch(var) {
    case 1:
        printf("%.0f + %.0f = %.0f",xx,yy,(xx+yy));
        break;
    case 2:
        printf("%.0f - %.0f = %.0f",xx,yy,(xx-yy));
        break;
    case 3:
        printf("%.0f * %.0f = %.0f",xx,yy,(xx*yy));
        break;
    case 4:
        if(yy!=0)
            printf("%.0f / %.0f = %.1f",xx,yy,xx/yy);
        else {
            printf("%.0f / %.0f = Undefined",xx,yy);
        }
        break;
    default:
        printf("Operation can't be performed.");
        break;
    }

stop:

    return 0;

}