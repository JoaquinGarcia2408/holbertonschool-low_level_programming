#include "main.h"
/**
 * print_square - check the code.
 * @size : is the size of the square
 * Return: Always 0.
 */
void print_square(int size)
{
	int logo, h;

	if (size > 0)
	{
		for (h = 0; h < size; h++)
		{
			for (logo = 0; logo < size; logo++)
			_putchar('#');
			if (h == size - 1)
				continue;
			_putchar('\n');
		}
	}
		_putchar('\n');
}
