#include <stdio.h>

main() {

  int num, i, fac=1;

  printf("FACTORIAL OF AN INPUT INTEGER NUMBER\n\n");
  
  printf("Enter a number: ");
  scanf("%d", &num);

  i=1;
  do { 
    fac = fac*i;
    i++;
  } while(i<=num); // will exit the loop if i is greater than number

  printf("The factorial of %d is %d", num, fac);

  printf("\n\nEnd of program!");

return 0;

}