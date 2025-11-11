#include <stdio.h>

/* Base class A */
typedef struct {
    void (*showA)(void);
} A;

/* Base class B */
typedef struct {
    void (*showB)(void);
} B;

/* Derived class C (inherits A and B) */
typedef struct {
    A a;
    B b;
    void (*showC)(void);
} C;

/* Functions */
void showA() { printf("Class A\n"); }
void showB() { printf("Class B\n"); }
void showC() { printf("Class C (inherits A and B)\n"); }

/* Main function */
int main() {
    A a = { showA };
    B b = { showB };
    C c = { a, b, showC };

    c.a.showA();
    c.b.showB();
    c.showC();

    return 0;
}
