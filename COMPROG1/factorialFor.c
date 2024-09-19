#include <stdio.h>

main() {

  int num, i;
  double fac=1;

  printf("FACTORIAL OF AN INPUT INTEGER NUMBER\n\n");
  printf("Enter a number: ");
  scanf("%d", &num);

  for(i=1; i<=num; i++) {
    fac = fac*i;
  }
  
  printf("The factorial of %d is %.0f", num, fac);
  
  printf("\n\nEnd of program!");

return 0;

}