#include <stdio.h>

int main() {
    int marks;

    printf("Enter marks: ");
    scanf("%d", &marks);

    if (marks < 0 || marks > 100)
        goto invalid;

    printf("Marks = %d", marks);
    goto end;

invalid:
    printf("Invalid marks");

end:
    return 0;
}
