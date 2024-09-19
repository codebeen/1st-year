#include <stdio.h> 
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <ctype.h>

FILE *fptr;

int number, i;
double bsalary;
double brate;
double halfbrate;
double otpay;
double othours;
double otrate;
double netpay;

struct employee {
    char empname[15];
    char empnum[10];
    char statcode[8];
    int hrswork;
    double deduc;
};

struct employee emprec; 

int ValidName(const char* name);
void input();
void otcompu();
void regular();
void casual();
void create();
void display();
void append();

int main() {
    int choice;
    int close;

	close = 0;
    while (close == 0) {
		system("cls");
	    printf("\n\t\033[36m=================[\033[37mWELCOME!\033[36m]================\033[0m\n");
	    printf("\n\t\033[36m=============================================\033[0m");
	    printf("\n\t\033[36m|                                           |\033[0m");
	    printf("\n\t\033[36m|  \033[37m [ 1 ] Create                           \033[36m |\033[0m");
	    printf("\n\t\033[36m|  \033[37m [ 2 ] Display                          \033[36m |\033[0m");
	    printf("\n\t\033[36m|  \033[37m [ 3 ] Append                           \033[36m |\033[0m");
	    printf("\n\t\033[36m|  \033[37m [ 4 ] Exit                             \033[36m |\033[0m");
	    printf("\n\t\033[36m|                                           |\033[0m");
	    printf("\n\t\033[36m=============================================\033[0m\n");

    
        ulitpar:
        printf("\n\tEnter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                create(); // Create employee records
                break;
            case 2:
                display(); // Display employee records
                break;
            case 3:
                append(); // Append employee records
                break;
            case 4:
            	printf("\n\tEnd of Program...");
                close = 1; // Exit the program
                break;
            default:
                printf("\n\tPlease enter 1-4 only! Press any key to continue...");
                getch();
                printf("\n");
                goto ulitpar;
                break;
        }
    }

    return 0;
}

int ValidName(const char* name) {
    for (int i = 0; name[i] != '\0'; i++) {
        if (isdigit(name[i])) {
            return 0;
        }
    }
    return 1;
}

void input() {
    printf("\n\tEnter employee number: ");
    scanf("%s", emprec.empnum);

	again:
    printf("\n\tEnter employee name: ");
    scanf("\n");
    scanf("%[^\n]s", emprec.empname);
    	
    	int validName = 0;
    	if (!ValidName(emprec.empname)) {
                printf("\n\tInvalid employee name!\n\tOnly alphabetic characters are allowed.\n");
                goto again;
            } else {
                validName = 1; // allowing the program to move forward
            }
    
    do {
    	printf("\n\tHours Worked: ");
    	scanf("%d", &emprec.hrswork);
    
    	if (emprec.hrswork < 0) 
    	    printf("\n\tInvalid input! Please enter a positive number.\n");
    	    
    } while (emprec.hrswork < 0);
	
    do {
    	printf("\n\tDeductions: ");
    	scanf("%lf", &emprec.deduc);
    
    	if (emprec.deduc < 0) 
    	    printf("\n\tInvalid input! Please enter a positive number.\n");
    	    
    } while (emprec.deduc < 0);
    
    printf("\n\tStatus Code [R/C]: %s ", emprec.statcode);
}

void otcompu() {
    otrate = brate * 1.5;
    othours = emprec.hrswork - 160;
    otpay = otrate * othours;
}

void regular() {
    input();
    
    do {
    	printf("\n\n\tEnter Basic Salary: ");
    	scanf("%lf", &bsalary);
    
    	if (bsalary < 0) 
    	    printf("\n\tInvalid input! Please enter a positive number.\n");
            
    } while (bsalary < 0);    
        

    if (emprec.hrswork > 160) {
        printf("\n\n\tThe employee is entitled to OVERTIME PAY!\n");
        brate = bsalary / 160;
        otcompu();
    } 
}

void casual() {
    input();
    
    do {
    	printf("\n\n\tEnter Basic Rate: ");
    	scanf("%lf", &brate);
    
    	if (brate < 0) 
    	    printf("\n\tInvalid input! Please enter a positive number.\n");
    	    
    } while (brate < 0);    
        
	bsalary = brate * 160;
	
    if (emprec.hrswork > 160) {
        printf("\n\tThe employee is entitled to OVERTIME PAY!\n");
        otcompu();
    } 

}

void create() {
    char sc;
    int ex;

    fptr = fopen("employ.txt", "w"); // Open file in write mode

	system("cls");
    if (fptr == NULL) {
        printf("\n\t[File cannot be created!]");
        exit(1);
    }

    do {
    	printf("\n\t==========[\033[32mYOU ARE CREATING\033[0m]==========\n");
        printf("\n\tEnter the number of employees you will input: ");
        scanf("%d", &number);

        if (number <= 0) {
            printf("\n\tInvalid input! Please enter a positive number.\n");
            fflush(stdin);
        }
    } while (number <= 0);

    printf("\n\t==========[STATUS CODE]=========");
    printf("\n\t|                              |");
    printf("\n\t|   [ R ] - Regular            |");
    printf("\n\t|   [ C ] - Casual             |");
    printf("\n\t|                              |");
    printf("\n\t================================\n");
    
    
    for (i = 0; i < number; i++) {
        ex = 0;
        while (ex == 0) {
            again:
            printf("\n\t[Enter status code of employee \033[32m %d \033[0m (R/C)]: ", i + 1);
            scanf(" %c", &sc);

            switch (sc) {
                case 'R':
                case 'r':
                    strcpy(emprec.statcode, "Regular");
                    regular();
                    ex = 1;
                    break;
                case 'C':
                case 'c':
                    strcpy(emprec.statcode, "Casual");
                    casual();
                    ex = 1;
                    break;
                default:
                    printf("\n\t[Invalid Input!]\n\tEnter R or C only! Press any key to continue...");
                    getch();
                    printf("\n");
                    goto again;
                    break;
            }
        }

        

        netpay = bsalary + otpay - emprec.deduc;

        fprintf(fptr, "\n\t%13s\t%17s\t%12s\t%12.2lf\t%10.2lf\t%13.2lf\t%15.2lf", emprec.empnum, emprec.empname, emprec.statcode, bsalary, otpay, emprec.deduc, netpay);
    }

    fclose(fptr); // Close the file

    printf("\n\n\t==========[You have successfully created employees' record!]=========");
    printf("\n\tPress any key to return to the main menu...");
    getch();
    return;
}



void display() {
    fptr = fopen("employ.txt", "r"); // Open file in read mode

	system("cls");
    if (fptr == NULL) {
        printf("\n\t[File does not exist!]");
        exit(1);
    }
    
    printf("\n\t===============================================[ \033[33mABC COMPANY\033[0m ]=================================================");
    printf("\n\t|                                                \033[33mMakati City\033[0m                                                  |");
    printf("\n\t|                                                  \033[33mPayroll\033[0m                                                    |");
    printf("\n\t================================================================================================================\n");
    
    for (i = 0; i < number; i++) {
    
    	fscanf(fptr, "\n\t%13s\t%17s\t%12s\t%12.2lf\t%10.2lf\t%13.2lf\t%15.2lf", &emprec.empnum, &emprec.empname, &emprec.statcode, &bsalary, &otpay, &emprec.deduc, &netpay);
        
        printf("\n\t   %15s\t%15s\t%15s\t%15s\t%15s\t%15s\t%15s            \n", "Employee Number", "Employee Name", "Status Code", "Basic Salary", "Overtime Pay", "Deductions", "Net Pay" );
	    
        printf("\n\t%13s\t%17s\t%12s\t%12.2lf\t%10.2lf\t%13.2lf\t%15.2lf", emprec.empnum, emprec.empname, emprec.statcode, bsalary, otpay, emprec.deduc, netpay);
    }

    fclose(fptr); // Close the file

    getch();
    return;
}


void append() {
    char sc;
    int ex;

    fptr = fopen("employ.txt", "a"); // Open file in append mode

	system("cls");
    if (fptr == NULL) {
        printf("\n\t[File cannot be created!]");
        exit(1);
    }
    
    printf("\n\t==========[\033[32mYOU ARE APPENDING\033[0m]==========\n");

    do {
        printf("\n\tEnter the number of employees you will input: ");
        scanf("%d", &number);

        if (number <= 0) {
            printf("\n\tInvalid input! Please enter a positive number.\n");
            fflush(stdin);
        }
    } while (number <= 0);

    printf("\n\t==========[STATUS CODE]=========");
    printf("\n\t|                              |");
    printf("\n\t|   [ R ] - Regular            |");
    printf("\n\t|   [ C ] - Casual             |");
    printf("\n\t|                              |");
    printf("\n\t================================\n");

    for (i = 0; i < number; i++) {
        ex = 0;
        while (ex == 0) {
            again:
            printf("\n\t[Enter status code of employee \033[32m %d \033[0m (R/C)]: ", i + 1);
            scanf(" %c", &sc);

            switch (sc) {
                case 'R':
                case 'r':
                    strcpy(emprec.statcode, "Regular");
                    regular();
                    ex = 1;
                    break;
                case 'C':
                case 'c':
                    strcpy(emprec.statcode, "Casual");
                    casual();
                    ex = 1;
                    break;
                default:
                    printf("\n\t[Invalid Input!]\n\tEnter R or C only! Press any key to continue...");
                    getch();
                    goto again;
                    break;
            }
        }

        netpay = bsalary + otpay - emprec.deduc;

        fprintf(fptr, "\n\t%13s\t%17s\t%12s\t%12.2lf\t%10.2lf\t%13.2lf\t%15.2lf", emprec.empnum, emprec.empname, emprec.statcode, bsalary, otpay, emprec.deduc, netpay);
    }

    fclose(fptr); // Close the file

    printf("\n\n\t==========[You have successfully appended employees' record!]=========");
    printf("\n\tPress any key to return to the main menu...");
    getch();
    return;
}
    
