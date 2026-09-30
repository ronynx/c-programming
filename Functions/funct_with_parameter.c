##a function without return value.

#include <stdio.h>

void add(int a, int b) {
    printf("Sum = %d", a + b);
}

int main() {
    add(10, 20);

    return 0;
}



##Calculate Sum of Two Numbers (a function with return value)

#include <stdio.h>

int add(int a, int b) {
    return a + b;
}

int main() {
    int result;

    result = add(10, 20);

    printf("Sum = %d", result);

    return 0;
}
