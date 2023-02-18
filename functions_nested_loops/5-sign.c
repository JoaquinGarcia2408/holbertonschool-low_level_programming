#include "main.h"
/**
 * print_sign - prints the sign of a number
 * @n: character
 * Return: Always 0
 **/
int print_sign(int n)
{
	int ret = 0;

	if  (n > 0)
	{
		ret = 1;
		_putchar ('+');
	}
	else if (n < 0)
	{
		ret = -1;
		_putchar ('-');
	}
	else
	{
		ret = 0;
		_putchar ('0');
	}
	return (ret);
}
