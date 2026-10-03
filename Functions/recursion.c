/*
Recursion is a programming concept in which a function calls itself to solve a problem by breaking it into smaller subproblems.

Every recursive function normally needs two important parts:
Base case — tells the function when to stop.
Recursive call — calls the function again with a smaller/simpler input.

return_type function(parameters)
{
    if (base_condition)
    {
        return result;
    }

    return function(smaller_input);
}
*/

#include <stdio.h>

void count(int n)
{
    if (n == 0)
        return;

    printf("%d\n", n);
    count(n - 1);
}

int main()
{
    count(5);

    return 0;
}

########example 2 ###########

#include <stdio.h>

int sum(int n)
{
    if (n == 0)
        return 0;

    return n + sum(n - 1);
}

int main()
{
    int result = sum(5);

    printf("Sum = %d", result);

    return 0;
}

#### example 3 ##############

#include <stdio.h>

int factorial(int n)
{
    if (n == 0)
        return 1;

    return n * factorial(n - 1);
}

int main()
{
    printf("Factorial = %d", factorial(5));

    return 0;
}
