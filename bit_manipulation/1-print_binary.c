#include "main.h"
/**
 * print_binary - Prints the binary of a number.
 * @n: The numberto be printed in binary.
 **/
void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);
	_putchar((n & 1) + '0');
}
