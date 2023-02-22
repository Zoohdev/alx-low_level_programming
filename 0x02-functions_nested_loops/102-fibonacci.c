#include <stdio.h>

/**
 * main - prints the first 50 Fibonacci numbers
 *
 * Return: 0 if success
 */
int main(void)
{
    int i, fib1 = 1, fib2 = 2, fib3;

    printf("%d, %d", fib1, fib2);

    for (i = 3; i <= 50; i++)
    {
        fib3 = fib1 + fib2;
        printf(", %d", fib3);
        fib1 = fib2;
        fib2 = fib3;
    }

    printf("\n");

    return 0;
}

