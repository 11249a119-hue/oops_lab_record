#include <stdio.h>
#include <string.h>

// Structure definition (simulating a class)
struct Student {
    int roll;
    char name[50];
    float marks;
};

// Constructor-like function
struct Student createStudent(int r, const char n[], float m) {
    struct Student s;
    s.roll = r;
    strcpy(s.name, n);
    s.marks = m;
    return s;
}

// Function to display student details
void displayStudent(struct Student s) {
    printf("Roll No: %d\n", s.roll);
    printf("Name: %s\n", s.name);
    printf("Marks: %.2f\n", s.marks);
}

int main() {
    // Creating objects using constructor-like function
    struct Student s1 = createStudent(1, "Alice", 89.5);
    struct Student s2 = createStudent(2, "Bob", 76.0);

    printf("Student 1 details:\n");
    displayStudent(s1);

    printf("\nStudent 2 details:\n");
    displayStudent(s2);

    return 0;
}