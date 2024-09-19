#include <stdio.h>

main() {

	int cdrink, hour, drops;
	
	printf("HOURS\t\tDROPS");
	
	hour=0;
	do {
	
		hour++;
		
		if(hour%3==0) {
			cdrink = cdrink + 28;
			drops = (drops + 162)- 28;
			printf("\n %d\t\t%d", hour, drops);
		}
		else {
			drops = drops + 162;
			printf("\n %d\t\t%d", hour, drops);
		}
	
	} while(drops<2452);
	
	printf("\n\nThe cat drank %d drops of wine.", cdrink);
	
	printf("\n\nEnd of Program!");
	
	return 0;

}