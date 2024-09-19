#include<stdio.h>
#include<string.h>

int main() {

	char str[20];
	char revstr[20];
	
	printf("Enter a string: ");
	scanf("%s", str);
	
	strlwr(str);
	strcpy(revstr, str); // copy the original string
	strrev(revstr); // reversed the string
	
	if(strcmp(revstr, str) == 0) {
		printf("%s is a Palindrome.", str);
	} else {
		printf("%s is not a Palindrome.", str);
	}
	
	printf("\n\nEnd of Program!\n");
	
	printf("------------------------------");

return 0;

}