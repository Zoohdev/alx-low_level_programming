#include <stdio.h>

/**
 * main - Entry point of the program
 * Return: Always 0 (Success)
 */
int main(void)
{
        int digit1 = 0;
        int digit2;

        while (digit1 < 9)
        {
                digit2 = digit1 + 1;
                while (digit2 < 10)
                {
                        putchar(digit1 % 10 + '0');
                        putchar(digit2 % 10 + '0');
                        if (digit1 != 8 || digit2 != 9)
                        {
                                putchar(',');
                                putchar(' ');
                        }
                        digit2++;
                }
                digit1++;
        }
        putchar('\n');

        return (0);
}

