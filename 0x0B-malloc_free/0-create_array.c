#include "main.h"
#include <stdlib.h>

/**
 * create_array - create array of size and assign character
 * @size: size of array
 * @c: char to assign
 * Description: Create array of size size and assign char
 * Return: pointer to array, NULL if fail
 */
char *create_array(unsigned int size, char c)
{	char *str;
unsigned int i;

str = malloc(sizeof(char) * size);
if (str == NULL)
{
return (NULL);
}
if (size == 0 || str == NULL || str[0] == '\0')

for (i = 0; i < size; i++)
str[i] = c;
return (str);
}
