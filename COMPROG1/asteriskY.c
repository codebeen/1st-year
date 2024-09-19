#include <stdio.h>

main() {

	int r, c;  // row, column

	for (r = 1; r <= 3; r++) { 
		for (c = 1; c <= 5; c++) {
			if (c == r || c + r == 6 )
				printf("*");
			else { 
				printf(" ");
			}
		}
		printf("\n");
	}

	for (r = 4; r <= 5; r++) { 
		for (c = 1; c <= 5; c++) {
			if ((r == 4 && c == 3) || (r == 5 && c == 3))
				printf("*");
			else {
				printf(" ");
			}
		}
		printf("\n");
	}

return 0;
}