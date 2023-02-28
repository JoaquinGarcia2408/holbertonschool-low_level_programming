#include "main.h"
/**
 * puts_half - prints half of a string
 * @str: string
 * Return: Always 0.
 **/
void puts_half(char *str)
{
	int lector = 0, tam = 0;

	while (str[lector])
	{
		tam++;
		lector++;
	}
	for (lector = 0; lector < tam; lector++)
	{
		if (tam % 2 == 0 && lector >= tam / 2)
			_putchar(str[lector]);
		else if (lector - 1 >= tam / 2)
			_putchar(str[lector]);
	}
	_putchar('\n');
}
