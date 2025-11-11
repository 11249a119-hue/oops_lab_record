#include <stdio.h>
#include <string.h>

// Define structure simulating a BankAccount "class"
typedef struct BankAccount {
    char name[50];
    int accountNumber;
    float balance;

    // Function pointers to simulate methods
    void (*deposit)(struct BankAccount*, float);
    void (*withdraw)(struct BankAccount*, float);
    void (*display)(struct BankAccount*);
} BankAccount;

// Function to deposit money
void depositMoney(BankAccount* acc, float amount) {
    if (amount <= 0) {
        printf("Invalid deposit amount!\n");
        return;
    }
    acc->balance += amount;
    printf("Deposited: %.2f\n", amount);
}

// Function to withdraw money
void withdrawMoney(BankAccount* acc, float amount) {
    if (amount <= 0) {
        printf("Invalid withdrawal amount!\n");
        return;
    }
    if (amount > acc->balance) {
        printf("Insufficient balance!\n");
    } else {
        acc->balance -= amount;
        printf("Withdrawn: %.2f\n", amount);
    }
}

// Function to display account details
void displayAccount(BankAccount* acc) {
    printf("\n--- Account Details ---\n");
    printf("Name: %s\n", acc->name);
    printf("Account Number: %d\n", acc->accountNumber);
    printf("Current Balance: %.2f\n", acc->balance);
    printf("------------------------\n");
}

int main() {
    BankAccount acc1;

    // Input account details
    printf("Enter Account Holder Name: ");
    scanf("%s", acc1.name);
    printf("Enter Account Number: ");
    scanf("%d", &acc1.accountNumber);
    acc1.balance = 0;  // Initial balance

    // Assign "methods"
    acc1.deposit = depositMoney;
    acc1.withdraw = withdrawMoney;
    acc1.display = displayAccount;

    // Perform operations
    acc1.deposit(&acc1, 5000);
    acc1.withdraw(&acc1, 1500);
    acc1.display(&acc1);

    return 0;
}
