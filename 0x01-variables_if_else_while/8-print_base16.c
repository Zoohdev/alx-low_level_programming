#include <stdio.h>

/**
 * main - prints all the numbers of base 16 in lowercase
 * Return: Always 0 (Success)
 */

int main(void)
{
    int num = 48;

    while (num < 103)
    {
        if (num == 58)
        {
            num = 97;
        }
        putchar(num);
        num++;
    }

    putchar('\n');

    return (0);
}

