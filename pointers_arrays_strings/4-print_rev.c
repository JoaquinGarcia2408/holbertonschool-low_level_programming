#include "main.h"
/**
 * print_rev - prints a string in reverse
 * @s: cadena
 * Return: Always 0.
 **/
void print_rev(char *s)
{
	int lector;

	while (s[lector] != '\0')
		lector++;
	while (lector)
		_putchar(s[--lector]);
	_putchar('\n');
}
