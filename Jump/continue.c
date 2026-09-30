#include <stdio.h>

int main() {
    int i;

    for (i = 1; i <= 5; i++) {
        if (i == 3)
            continue;

        printf("%d\n", i);
    }

    return 0;
}

#output
1
2
4
5
