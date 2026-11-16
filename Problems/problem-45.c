/*
Create a structure representing a bank account of a customer. What fields did you use and why?
*/

#include <stdio.h>
#include <string.h>

// 1. Define the Structure
struct BankAccount {
    int accountNumber;
    char accountHolderName[50];
    char accountType[20]; // e.g., "Savings", "Current"
    double balance;
};

// Function to deposit money (Uses a pointer to modify the original struct)
void deposit(struct BankAccount *acc, double amount) {
    if (amount > 0) {
        acc->balance += amount; // '->' is used to access members via a pointer
        printf("Successfully deposited: %.2f\n", amount);
    } else {
        printf("Invalid deposit amount!\n");
    }
}

// Function to display account details (Passes by value since we are only reading)
void displayAccount(struct BankAccount acc) {
    printf("\n--- Account Details ---\n");
    printf("Account Number : %d\n", acc.accountNumber);
    printf("Account Holder : %s\n", acc.accountHolderName);
    printf("Account Type   : %s\n", acc.accountType);
    printf("Current Balance: %.2f\n", acc.balance);
    printf("-----------------------\n");
}

int main() {
    // 2. Create an instance (variable) of the structure
    struct BankAccount myAccount;

    // 3. Initialize the members using the dot (.) operator
    myAccount.accountNumber = 123456789;
    strcpy(myAccount.accountHolderName, "Krish"); // strcpy is needed for char arrays
    strcpy(myAccount.accountType, "Savings");
    myAccount.balance = 1500.50;

    // Display initial details
    displayAccount(myAccount);

    // 4. Perform an operation (Pass the memory address using &)
    deposit(&myAccount, 500.00);
    
    // Display updated details
    displayAccount(myAccount);

    return 0;
}