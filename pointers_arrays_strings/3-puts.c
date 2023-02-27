#include "main.h"
/**
 * _puts - unction that prints a string, followed by a new line
 * @str: variable
 * Return: Always 0.
 **/
void _puts(char *str)
{
	int lector;

	for (lector = 0; str[lector] != '\0'; lector++)
	{
		_putchar(str[lector]);
	}
		_putchar('\n');
}
