#include "main.h"
#include "limits.h"

/**
 * main - Entry poin
 * @num: Description of parameter x
 * Return: num
 **/
int print_last_digit(int num)
{
	if (num >= 0)
	{
		num = num % 10;
		_putchar('0' + num);
	}
	else
	{
		num = (num % 10) * -1;
		_putchar('0' + num);
	}
	return (num);
}
