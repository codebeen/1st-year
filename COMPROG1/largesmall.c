#include<stdio.h>

main() {

    int var1, var2, var3;
    
    printf("Enter first number: ");
    scanf("%d", &var1);
    

    printf("Enter second number: ");
    scanf("%d", &var2);
    

    printf("Enter third number: ");
    scanf("%d", &var3);
    

    if(var1<var2 && var1<var3)
        printf("\nSmallest value: %d",var1);
        
    if(var2<var1 && var2<var3)
        printf("\nSmallest value: %d",var2);
        
    if(var3<var1 && var3<var2)
        printf("\nSmallest value: %d",var3);

    if(var1>var2 && var1>var3)
        printf("\nLargest value: %d",var1);
        
    if(var2>var1 && var2>var3)
        printf("\nLargest value: %d",var2);

    if(var3>var1 && var3>var2)
        printf("\nLargest value: %d",var3);
        

    return 0;

}