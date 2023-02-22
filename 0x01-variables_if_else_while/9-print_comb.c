#include <stdio.h>

/**
 * main - Prints all possible combinations of single-digit numbers.
 *
 * Return: Always 0.
 */
int main(void)
{
    int i;

    for (i = 0; i < 10; i++) /* loop through single-digit numbers */
    {
        putchar(i + '0'); /* print the number as a character */
        if (i != 9) /* if it's not the last number */
        {
            putchar(','); /* print comma */
            putchar(' '); /* print space */
        }
    }

    putchar('\n'); /* print newline character */

    return (0);
}

