#include <stdio.h>

int main() {
    int marks;

    printf("Enter marks: ");
    scanf("%d", &marks);

    marks >= 40 ? printf("Pass") : printf("Fail");

    return 0;
}
