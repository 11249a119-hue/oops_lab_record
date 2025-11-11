#include <stdio.h>
#include <string.h>

// Base structure
struct Laptop {
    char brand[20];
    char model[20];
    float price;
};

// Derived structure for Gaming Laptop
struct GamingLaptop {
    struct Laptop base;
    char gpu[30];
};

// Derived structure for Business Laptop
struct BusinessLaptop {
    struct Laptop base;
    int batteryLife;
};

// Function to display general laptop details
void displayLaptop(struct Laptop l) {
    printf("Brand: %s\n", l.brand);
    printf("Model: %s\n", l.model);
    printf("Price: $%.2f\n", l.price);
}

// Function to display gaming laptop details
void displayGamingLaptop(struct GamingLaptop g) {
    displayLaptop(g.base);
    printf("GPU: %s\n", g.gpu);
}

// Function to display business laptop details
void displayBusinessLaptop(struct BusinessLaptop b) {
    displayLaptop(b.base);
    printf("Battery Life: %d hours\n", b.batteryLife);
}

int main() {
    // Create objects
    struct GamingLaptop gaming = {{"Asus", "ROG Zephyrus", 1800.00}, "NVIDIA RTX 4070"};
    struct BusinessLaptop business = {{"Dell", "Latitude 7440", 1500.00}, 12};

    printf("Gaming Laptop Details:\n");
    displayGamingLaptop(gaming);

    printf("\nBusiness Laptop Details:\n");
    displayBusinessLaptop(business);

    return 0;
}
