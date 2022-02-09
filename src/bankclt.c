#include <stdio.h>
#include <stdlib.h>

struct acc {
	char acc_holder[20];
	char bank[20];
	char bank_branch[20];
	int cardNos[20];
	float balance;
};

void print_opts() {
    printf("Please select one of the following options (1/2/3/4/5/6)\n");
    printf("1. Open new account\n");
    printf("2. Print account information\n");
    printf("3. Deposit funds\n");
    printf("4. Withdraw funds\n");
    printf("5. Transfer funds\n");
    printf("6. Close the application\n");
    printf("Please select an option to continue: ");
}

int main() {
    printf("*** Welcome to the Bank Application ***\n");
	int option;
	print_opts();
    scanf("%d", &option);

    switch(option) {
        case 1: printf("\nOpening new account!");
        break;

        case 6: 
        system("clear");
        printf("Thanks for using the bank application.");
        break;

        default: printf("\nInvalid option.\n");
        break;
    }
	return 0;
}
