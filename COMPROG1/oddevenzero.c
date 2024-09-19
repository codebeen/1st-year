#include<stdio.h>

main() {

    int a;

    printf("Enter a number: ");
    scanf("%d",&a);
    
    if(a==0) {
        printf("The number %d is ZERO!",a);
    }    
    else if(a%2!=0) {
        printf("The number %d is an odd number",a);
    }    
    else {
        printf("The number %d is an even number",a);
    }        

    return 0;
}