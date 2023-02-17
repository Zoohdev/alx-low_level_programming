#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main: Prints whether number is greatr or less than 5, 
 * also prints if number equals zero
 *
 * Return: Always 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
        if ((n % 10) > 5)
	{	
		printf("last digits of %d is %d and is greater than 5\n",
				n, n%10);
	}
	else if  ((n % 10) < 6) && (n % 10) != 0)
	{
		printf("Last digit of %d is %d and is less than and not 0\n",
							n, n % 10);
	}
	else
	{
		printf("Last digit of %d is %d and is o\n", 
				n, n % 10);
	}
		return (0);
}
