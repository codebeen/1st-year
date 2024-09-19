#include<stdio.h>
#include<conio.h>
#include<string.h>

int main() {

	char confirm_pass[8];
	char password[8];
	char temp_var;
	int tries, i, length;
	
	printf("\nEnter the length of your password (max 0f 8): ");
	scanf("%d", &length);
	
	printf("Enter your desired password (must be %d characters): ", length);
	for(i = 0; i < length; i++) {
		temp_var = getch();
		password[i] = temp_var;
		temp_var = '*';
		printf("%c", temp_var);	
	}
	
	for (tries = 1; tries <=3; tries++) {
		printf("\nConfirm your password: ");
		
		for (i = 0; i < length; i++) {
			temp_var = getch();
			confirm_pass[i] = temp_var;
			temp_var = '*';
			printf("%c", temp_var);
		}
	
		int compare = strcmp(password, confirm_pass);
		
		if(compare == 0) {
			printf("\n\nWelcome to PUP Quezon City!");
			break;
		} else {
			printf("\nIncorrect password!");	
		}
		
		if(tries == 3) {
			printf("\n\nIntruder Alert!");
			break;
		}
		
	}
	printf("\n\nEnd of Program!\n");
	printf("------------------------------");

}