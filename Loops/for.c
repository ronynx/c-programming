#include <stdio.h>

int main() {
    int i;

    for (i = 1; i <= 5; i++) {
        printf("%d\n", i);
    }

    return 0;
}



#example 2

#include <stdio.h>

int main() {
    int marks, total = 0;
    int i;

    for (i = 1; i <= 5; i++) {
        printf("Enter marks for subject %d: ", i);
        scanf("%d", &marks);

        total = total + marks;
    }

    printf("Total marks = %d", total);

    return 0;
}
