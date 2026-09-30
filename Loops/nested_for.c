#include <stdio.h>

int main() {
    int i, j;

    for (i = 1; i <= 3; i++) {
        for (j = 1; j <= 4; j++) {
            printf("* \t");
        }
        printf("\n");
    }

    return 0;
}

#output
* * * *
* * * *
* * * *


#example 2

#include <stdio.h>

int main() {
    int i, j;

    for (i = 1; i <= 5; i++) {
        for (j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}

#output
*
* *
* * *
* * * *
* * * * *


#example 3

#include <stdio.h>

int main() {
    int i, j;

    for (i = 5; i >= 1; i--) {
        for (j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}

#output
* * * * *
* * * *
* * *
* *
*

#exmaple 4

#include <stdio.h>

int main() {
    int i, j;

    for (i = 1; i <= 3; i++) {
        for (j = 1; j <= 3; j++) {
            if (j >= 4 - i)
                printf("* ");
            else
                printf("  ");
        }
        printf("\n");
    }

    return 0;
}
#output
    *
  * *
* * *

#example 5

#include <stdio.h>

int main() {
    int i, j;

    for (i = -2; i <= 2; i++) {
        for (j = -2; j <= 2; j++) {
            if (i*i + j*j <= 4)
                printf("* ");
            else
                printf("  ");
        }
        printf("\n");
    }

    return 0;
}

#output

    *     
  * * *   
* * * * * 
  * * *   
    *     
