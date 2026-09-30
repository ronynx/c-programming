/* A function prototype tells the compiler about a function before the function is used. */

#include <stdio.h>

// Function prototype
int add(int, int);

int main() {
    int result;

    result = add(10, 20);

    printf("Sum = %d", result);

    return 0;
}

// Function definition
int add(int a, int b) {
    return a + b;
}
