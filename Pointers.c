#include <stdio.h>

int main() {
    int a = 10;
    int *p = &a; // Pointer to the variable a

    printf("Value of a: %d\n", a);
    printf("Address of a: %p\n", (void*)&a);
    printf("Value of p (address of a): %p\n", (void*)p);
    printf("Value pointed to by p: %d\n", *p);

    *p = 20; // Modify the value of a using the pointer
    printf("New value of a: %d\n", a);

    return 0;
}