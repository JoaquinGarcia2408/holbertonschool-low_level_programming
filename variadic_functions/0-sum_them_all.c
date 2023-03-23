#include "variadic_functions.h"
/**
 * sum_them_all - function that returns the sum of alla parameters
 * @n: a variable;
 * @...: the number of parameters;
 * Return: 0;
 **/
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int valor = 0;
	unsigned int d = 0;
	va_list p;

	if (n == 0)
	{
		return (0);
	}
	va_start(p, n);
	for  (i = 0; i < n; i++)
	{
		valor = va_arg(p, int);
		d += valor;
	}
	va_end(p);
	return (d);
}
