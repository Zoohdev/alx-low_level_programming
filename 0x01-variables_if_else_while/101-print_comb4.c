#include <stdio.h>

/**
 * main - Entry point of the program
 * Return: Always 0 (Success)
 */
int main(void)
{
        int digit1 = 0;
        int digit2;
        int digit3;

        while (digit1 < 8)
        {
                digit2 = digit1 + 1;
                while (digit2 < 9)
                {
                        digit3 = digit2 + 1;
                        while (digit3 < 10)
                        {
                                putchar(digit1 % 10 + '0');
                                putchar(digit2 % 10 + '0');
                                putchar(digit3 % 10 + '0');
                                if (digit1 != 7 || digit2 != 8 || digit3 != 9)
                                {
                                        putchar(',');
                                        putchar(' ');
                                }
                                digit3++;
                        }
                        digit2++;
                }
                digit1++;
        }
        putchar('\n');

        return (0);
}

