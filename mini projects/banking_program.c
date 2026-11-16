#include <stdio.h>

void checkBalance(float balance) {
    printf("\nYour current balance is: $%.2f\n", balance);
}

float deposit() {
    float amt = 0.0;

    printf("\nEnter amount to deposit: $");
    scanf("%f", &amt);

    if (amt <= 0) {
        printf("Invalid Amount!\n");
        return 0.0f;
    }
    else {
        printf("\n Successfully deposited $%.2f\n", amt);
        return amt;
    }
}

float withdraw(float balance) {
    float amt = 0.0;

    printf("\nEnter the amount you want to withdraw: $");
    scanf("%f", &amt);

    if (amt <= 0) {
        printf("\nInvalid Amount! Please try again.\n");
        return 0.0;
    }
    else if (amt > balance) {
        printf("\nInsufficient Funds! Your balance is $%.2f\n", balance);
        return 0.0;
    }
    else {
        printf("Withdrawal of $%.2f successfully!\n", amt);
        return amt;
    }
}

int main() {
    int choice = 0;
    float balance = 0.0;

    printf("*** WELCOME TO THE BANK ***\n");

    do {
        printf("\nSelect an option:\n");
        printf("1. Check Balance\n");
        printf("2. Deposit Money\n");
        printf("3. Withdraw Money\n");
        printf("4. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                checkBalance(balance);
                break;
            case 2:
                balance += deposit();
                break;
            case 3:
                balance -= withdraw(balance);
                break;
            case 4:
                printf("\n Thank You for Using the Bank!\n");
                break;
            default:
                printf("\nInvalid Choice. Please make choice between 1-4\n");
        }
    } while (choice != 4);
    
    return 0;
}