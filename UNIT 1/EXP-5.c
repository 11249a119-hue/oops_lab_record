#include <stdio.h>
#include <string.h>

// Base class: Car
struct Car {
    char brand[50];
    char model[50];
    int year;
    float price;
    void (*display)(struct Car *); // Function pointer for polymorphism
};

// Derived class: ElectricCar
struct ElectricCar {
    struct Car base;
    float batteryCapacity;
};

// Function to display normal car details
void displayCar(struct Car *c) {
    printf("\n--- Car Details ---\n");
    printf("Brand: %s\n", c->brand);
    printf("Model: %s\n", c->model);
    printf("Year: %d\n", c->year);
    printf("Price: $%.2f\n", c->price);
}

// Function to display electric car details
void displayElectricCar(struct Car *c) {
    struct ElectricCar *ec = (struct ElectricCar *)c;
    printf("\n--- Electric Car Details ---\n");
    printf("Brand: %s\n", ec->base.brand);
    printf("Model: %s\n", ec->base.model);
    printf("Year: %d\n", ec->base.year);
    printf("Price: $%.2f\n", ec->base.price);
    printf("Battery Capacity: %.1f kWh\n", ec->batteryCapacity);
}

int main() {
    // Creating a normal car
    struct Car car1;
    strcpy(car1.brand, "Toyota");
    strcpy(car1.model, "Camry");
    car1.year = 2022;
    car1.price = 30000;
    car1.display = displayCar;

    // Creating an electric car
    struct ElectricCar ecar1;
    strcpy(ecar1.base.brand, "Tesla");
    strcpy(ecar1.base.model, "Model 3");
    ecar1.base.year = 2023;
    ecar1.base.price = 45000;
    ecar1.batteryCapacity = 75.0;
    ecar1.base.display = displayElectricCar;

    // Array of base pointers to simulate polymorphism
    struct Car *showroom[2];
    showroom[0] = &car1;
    showroom[1] = (struct Car *)&ecar1;

    // Display all cars
    for (int i = 0; i < 2; i++) {
        showroom[i]->display(showroom[i]);
    }

    return 0;
    }