#include<stdio.h>

main() {

    int a;
    
    printf("Enter a number: ");
    scanf("%d",&a);
    
    if(a==0) {   
    	printf("The number %d is ZERO!",a);
      goto stop;
    }
    if(a%2!=0)
        printf("The number %d is an odd number",a);
    if(a%2==0)
        printf("The number %d is an even number",a);

stop:

    return 0;

}