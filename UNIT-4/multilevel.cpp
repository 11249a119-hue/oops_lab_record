#include <stdio.h>
using namespace std;
 class A 
typedef struct {
    void (*showA)(void);
} 
class B 
typedef struct {
    A baseA;  // contains base class A
    void (*showB)(void);
} 
class C
typedef struct {
    B baseB;  // contains base class B (and indirectly A)
    void (*showC)(void);
} 
void showA_impl() {
    printf("This is class A (Base class)\n");
}

void showB_impl() {
    printf("This is class B (Derived from A)\n");
}

void showC_impl() {
    printf("This is class C (Derived from B)\n");
}
int main() {
    A a = { showA_impl };
    B b = { a, showB_impl };
    C c = { b, showC_impl };
    printf("Calling from object C:\n")
    c.baseB.baseA.showA(); // from A
    c.baseB.showB();       // from B
    c.showC();             // from C

    return 0;
}
