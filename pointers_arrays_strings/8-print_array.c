#include "main.h"
/**
 * print_array - prints n elements of an array of integers
 * @a: array
 * @n: number of elements of the array to be printed
 **/
void print_array(int *a, int n)
{
	int cont;

	for (cont = 0; cont < n; cont++)
	{
		printf("%d", a[cont]);
	if (cont < n - 1)
		printf(", ");
	}
	putchar('\n');
}
