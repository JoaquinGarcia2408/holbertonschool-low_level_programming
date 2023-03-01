#include "main.h"
/**
 * reverse_array - reverses the content of an array of integers.
 * @a: string
 * @n: number of elements of the array
 **/
void reverse_array(int *a, int n)
{
	int lector, i;

	i = 0;
	while (a[i] != n)
		i++;
	for (lector = i - 1; lector >= 0; lector--)
	{
		_putchar(a[lector]);
	}
	_putchar('\n');
}
