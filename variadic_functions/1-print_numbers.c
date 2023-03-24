#include "variadic_functions.h"
/**
 **/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	int i;
	int valor;
	va_list p;

	if (separator == NULL)
	{
		return (0);
	}
	va_start(p, n);
	for (i = 0; i < n; i++)
	{
		valor = va_arg(p, int);
		printf("%d", valor);
	}
	printf("\n");
	va_end(p);
}
