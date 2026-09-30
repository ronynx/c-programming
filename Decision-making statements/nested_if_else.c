#include <stdio.h>

int main() {
    int marks;

    printf("Enter marks: ");
    scanf("%d", &marks);

    if (marks >= 40) {
        if (marks >= 80) {
            printf("Pass with Distinction");
        } else {
            printf("Pass");
        }
    } else {
        printf("Fail");
    }

    return 0;
}
