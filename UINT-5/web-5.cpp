#include <stdio.h>
using namespace std;
struct Calculator {
    int number;
};

// Function to calculate factorial
long long factorial(struct Calculator *calc) {
    if (calc->number < 0) {
        return -1; // Invalid input
    }
    long long fact = 1;
    for (int i = 1; i <= calc->number; i++) {
        fact *= i;
    }
    return fact;
}

// Function to save record to file
void save_record(int num, long long result) {
    FILE *file = fopen("records.txt", "a");
    if (file != NULL) {
        if(result == -1)
            fprintf(file, "Number: %d, Result: Invalid input\n", num);
        else
            fprintf(file, "Number: %d, Factorial: %lld\n", num, result);
        fclose(file);
    }
}

int main() {
    struct Calculator calc;
    long long result;

    printf("Enter a number: ");
    scanf("%d", &calc.number);

    result = factorial(&calc);

    if (result == -1)
        printf("Invalid input\n");
    else
        printf("Factorial of %d is %lld\n", calc.number, result);

    save_record(calc.number, result);

    printf("Record saved to 'records.txt'\n");

    return 0;
}
