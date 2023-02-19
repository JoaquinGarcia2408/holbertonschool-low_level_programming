#include "main.h"
/**
 * print_to_98 - Prints all natural numbers from input to 98,
 * in order separated by a comma followed by a space.
 * @n: The start counting number.
 **/
void print_to_98(int n)
{
	if (n < 98)
	{
		for (; n <= 97; n++)
		{
			printf("%d, ", n);
		}
		{
		printf("98\n");
		}
	}
	else if (n == 98)
	{
		printf("98\n");
	}
	else
	{
		for (; n >= 99; n--)
		{
			printf("%d, ", n);
		}
		{
			printf("98\n");
		}
	}
}
