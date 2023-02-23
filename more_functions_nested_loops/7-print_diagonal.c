#include "main.h"
/**
 * print_diagonal - check the code.
 * @n: numero aleatorio
 * Return: Always 0.
 */
void print_diagonal(int n)
{
	int i = 0, space;

	if (n <= 0)
		_putchar('\n');
	else
	{
		while (i < n)
		{
			space = 0;
			while (space < i)
			{
				_putchar(' ');
				space++;
			}
		_putchar('\\');
		_putchar('\n');
		i++;
		}

	}
}
