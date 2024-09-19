#include <stdio.h>

main() {

    int row, col; // row, column

    for(row=1; row<=5; row++) { 
		for(col=1; col<=row; col++)
			printf("*"); // print asterisk
		printf("\n");
	}
	return 0;

}