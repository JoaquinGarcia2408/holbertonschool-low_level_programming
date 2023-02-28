#include "main.h"
/**
 * print_rev - prints a string in reverse
 * @s: cadena
 * Return: Always 0.
 **/
void print_rev(char *s)
{
	int lector, i;

	for (i = 0; s[i] != '\0'; i++)
		;
	for (lector = i-1; lector >= 0; lector--)
	{
		_putchar(s[lector]);
	}
	_putchar('\n');
}
