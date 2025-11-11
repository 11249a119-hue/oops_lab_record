#include <string.h>

// Define structure to simulate class
typedef struct Student {
    char name[50];
    int roll;
    float marks[3];

    // Function pointers to simulate methods
    void (*input)(struct Student*);
    void (*display)(struct Student*);
    float (*average)(struct Student*);
} Student;

// Function to input student data
void inputStudent(Student* s) {
    printf("Enter student name: ");
    scanf("%s", s->name);
    printf("Enter roll number: ");
    scanf("%d", &s->roll);
    for(int i = 0; i < 3; i++) {
        printf("Enter marks for subject %d: ", i+1);
        scanf("%f", &s->marks[i]);
    }
}

// Function to display student data
void displayStudent(Student* s) {
    printf("\nStudent Information:\n");
    printf("Name: %s\n", s->name);
    printf("Roll Number: %d\n", s->roll);
    for(int i = 0; i < 3; i++) {
        printf("Marks in Subject %d: %.2f\n", i+1, s->marks[i]);
    }
    printf("Average Marks: %.2f\n", s->average(s));
}

// Function to calculate average marks
float averageMarks(Student* s) {
    float sum = 0;
    for(int i = 0; i < 3; i++) {
        sum += s->marks[i];
    }
    return sum / 3;
}

// Main function
int main() {
    // Create student object
    Student s1;

    // Assign function pointers
    s1.input = inputStudent;
    s1.display = displayStudent;
    s1.average = averageMarks;

    // Call methods
    s1.input(&s1);
    s1.display(&s1);

    return 0;
}
