#include<stdio.h>

main() {

    float hw,rph;

    //Input
    printf("Enter hours worked for the week: ");
    scanf("%f", &hw);
    
    printf("Enter rate per hour: ");
    scanf("%f", &rph);

    printf("\n");

    //Process
    if(hw > 40)
        printf("Week's wage = %.2f",(hw * rph) + ((rph + rph/2)*(hw - 40)));
    if(hw <= 40)
        printf("Week's wage = %.2f", hw * rph);

    return 0;

}