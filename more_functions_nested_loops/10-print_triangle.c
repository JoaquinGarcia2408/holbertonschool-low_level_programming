#include "main.h"
/**
 * *  * print_triangle - Prints the # triangle.
 * *   * @size: The size of the square.
 * **/
void print_triangle(int size)
{
	int times, spaces;

	if (size > 0)
	{
		for (times = 1; times <= size; times++)
		{
			for (spaces = size - times; spaces > 0; spaces--)
				_putchar(' ');
			for (spaces = 0; spaces < times; spaces++)
				_putchar('#');
			if (times == size)
				continue;
			_putchar('\n');
		}
	}
	_putchar('\n');
}
