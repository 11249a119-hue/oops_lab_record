#include <stdio.h>
#include <string.h>

// Simulating a class using struct
struct ElectricityCustomer {
    char name[50];
    int customerID;
    float unitsConsumed;
    float billAmount;
};

// Function to calculate electricity bill
void calculateBill(struct ElectricityCustomer *cust) {
    float units = cust->unitsConsumed;
    if (units <= 100)
        cust->billAmount = units * 1.0;
    else if (units <= 200)
        cust->billAmount = 100 * 1.0 + (units - 100) * 2.5;
    else if (units <= 500)
        cust->billAmount = 100 * 1.0 + 100 * 2.5 + (units - 200) * 4.0;
    else
        cust->billAmount = 100 * 1.0 + 100 * 2.5 + 300 * 4.0 + (units - 500) * 6.0;
}

// Function to display customer bill
void displayBill(struct ElectricityCustomer cust) {
    printf("\n Electricity Bil-\n");
    printf("Customer Name : %s\n", cust.name);
    printf("Customer ID   : %d\n", cust.customerID);
    printf("Units Consumed: %.2f\n", cust.unitsConsumed);
    printf("Bill Amount   : Rs. %.2f\n", cust.billAmount);
    printf("\n");
}

int main() {
    struct ElectricityCustomer cust;

    // Input customer details
    printf("Enter Customer Name: ");
    scanf(" %[^\n]", cust.name);  // to read string with spaces
    printf("Enter Customer ID: ");
    scanf("%d", &cust.customerID);
    printf("Enter Units Consumed: ");
    scanf("%f", &cust.unitsConsumed);

    // Calculate and display bill
    calculateBill(&cust);
    displayBill(cust);

    return 0;
}