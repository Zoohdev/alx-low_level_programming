#include <stdio.h>

/**
 * main - Prints all single digit numbers of base 10 starting from 0.
 *
 * Return: Always 0.
 */
int main(void)
{
    int i;

    for (i = 0; i < 10; i++) /* loop through single-digit numbers */
    {
        putchar(i + 48); /* print the number as a character */
    }

    putchar('\n'); /* print newline character */

    return (0);
}


