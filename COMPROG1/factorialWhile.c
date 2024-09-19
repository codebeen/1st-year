#include <stdio.h>

main() {

  int num, i, fac=1;

  printf("FACTORIAL OF AN INPUT INTEGER NUMBER\n\n");

  printf("Enter a number: ");
  scanf("%d", &num);

  i=1;
  while(i<=num) {
    fac = fac*i;
    i++; // increments the i
  }

  printf("The factorial of %d is %d", num, fac);

  printf("\n\nEnd of program!");

  return 0;

}