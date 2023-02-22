#include <stdio.h>

/**
 * main - Prints the lowercase alphabet in reverse, followed by a new line.
 *
 * Return: Always 0.
 */
int main(void)
{
    int i;

    for (i = 'z'; i >= 'a'; i--) /* loop through the lowercase alphabet in reverse */
    {
        putchar(i); /* print the character */
    }

    putchar('\n'); /* print newline character */

    return (0);
}

