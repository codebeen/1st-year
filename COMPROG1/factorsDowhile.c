#include <stdio.h>

main() {

  int input, i;

  printf("FACTORS OF THE NUMBER ENTERED\n");

  do {
    printf("\nEnter a number: ");
    scanf("%d", &input);

    for(i=1; i<=input; i++) {
      if(input%i==0)  // if remainder is equal to 0, then it is a factor
        printf("%d ", i);
    }
  } while (input!=0); // the program will end if 0 is entered

  printf("\n\nEnd of program!");

  return 0;
  
}