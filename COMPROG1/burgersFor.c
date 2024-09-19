#include <stdio.h>

main() {

    int hour, minutes, burg;

	burg=hour=minutes=0;

	printf("\t\tJEMIMAH'S HAMBURGER");
	printf("\nHOURS");
	printf("\t MINUTES");
	printf("\t NUMBER OR BURGERS");

	for(burg=12; burg<=600; burg+=12) { 
	
		minutes=minutes+2; // increment the minutes by 2

		if(minutes%60!=0)
			printf("\n\t\t%d\t\t %d", minutes, burg);
		if(minutes%60==0) { 
			hour++;   // increment the hours
			minutes=0; // minutes will reset to 0

			printf("\n %d\t\t%d\t\t %d", hour, minutes, burg);
		}

	}

	printf("\n\nGary delivered the hamburgers in %d hour/s and %d minutes", hour, minutes);
	printf("\n\nEnd of Program!");

return 0;

}