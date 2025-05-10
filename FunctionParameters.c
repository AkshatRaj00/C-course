////Without arguments and without return value-----------
/*#include <stdio.h>

void func() {
    printf("This function doesn't return anything.");
}

int main() {
    func();

    return 0;
}*/




//Without arguments and with the return value.-----------
/*#include <stdio.h>

int func() {
    int a, b;
    scanf("%d", &a);
    scanf("%d", &b);
    return a + b;
}

int main() {
    int ans = func();
    printf("%d", ans);
}*/




//With arguments and without a return value.----------
/*#include <stdio.h>

void func(int a, int b) {
    printf("%d", a * b);
}

int main() {
    func(2, 3);
}*/





//With arguments and with the return value----------
#include <stdio.h>

int func(int a, int b) {
    return a + b;
}

int main() {
    int ans = func(2, 3);
    printf("%d", ans);
}