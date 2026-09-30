#include <stdio.h>

int main() {
    int i = 1;

    do {
        printf("%d\n", i);
        i++;
    } while (i <= 5);

    return 0;
}


#include <stdio.h>

int main() {
    int guess;

    do {
        printf("Guess the number (1-10): ");
        scanf("%d", &guess);

        if (guess == 7) {
            printf("Correct! You win!\n");
        } else {
            printf("Wrong! Try again.\n");
        }

    } while (guess != 7);

    return 0;
}
