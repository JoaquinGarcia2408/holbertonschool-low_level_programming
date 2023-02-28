#include "main.h"
/**
 * puts2 - prints every other character of a string
 * @str: string
 * Return: Always 0.
 **/
void puts2(char *str)
{
	int lec = 0, i = 0;

	while (str[lec++])
		i++;
	for (i = 0; i < lec; i++)
	{
		if (i % 2 == 0)
		_putchar(str[i]);
	}
	_putchar('\n');
}
