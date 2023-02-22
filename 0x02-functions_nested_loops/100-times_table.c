/**
 * print_times_table - prints the n times table, starting with 0
 * @n: the times table to print
 *
 * Return: void
 */
void print_times_table(int n)
{
    int i, j, result;

    if (n < 0 || n > 15)
    {
        return;
    }

    for (i = 0; i <= n; i++)
    {
        for (j = 0; j <= n; j++)
        {
            result = i * j;

            if (result < 10)
            {
                if (j > 0)
                {
                    putchar(' ');
                    putchar(' ');
                }
                putchar(result + '0');
            }
            else if (result < 100)
            {
                putchar(' ');
                putchar((result / 10) + '0');
                putchar((result % 10) + '0');
            }
            else
            {
                putchar((result / 100) + '0');
                putchar((result / 10) % 10 + '0');
                putchar((result % 10) + '0');
            }

            if (j < n)
            {
                putchar(',');
                putchar(' ');
            }
        }

        putchar('\n');
    }
}

