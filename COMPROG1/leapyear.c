#include<stdio.h>

main() {

    int year;
    
    printf("Input a year: ");
    scanf("%d",&year);

    if(year%4==0 && year%100!=0 || year%400==0)
        printf("%d is a Leap Year!",year);
    else {
        printf("%d is not a Leap Year!",year);
    }
   
    return 0;

}