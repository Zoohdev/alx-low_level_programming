#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point of the program
 * Return: Always 0 (Success)
 */
int main(void)
{	 int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
int last_digit = n % 10;
printf("Last digit of %d is %d\n", n, last_digit);
return (0);
}
