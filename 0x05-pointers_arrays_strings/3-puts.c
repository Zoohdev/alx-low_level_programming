#include "main.h"
/**
 * _puts - Prints a string
 *@str: The string 
 * Return: Always 0(Success)
 */
void _puts(char *str)

{
	for(; *str != '\0'; str++);
	{	_putchar(*str);
	}
	_putchar('\n');
}
