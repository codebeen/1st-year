#include <stdio.h>

main() {

  int input, i;

  printf("FACTORS OF THE NUMBER ENTERED\n");

  printf("\nEnter a number: ");
  scanf("%d", &input);

  while(input!=0) {
    for(i=1; i<=input; i++) {
        if(input%i==0)
          printf("%d ", i);
    }

    printf("\nEnter a number: ");
    scanf("%d", &input);

    i++;
  }

  printf("\n\nEnd of program!");

  return 0;

}