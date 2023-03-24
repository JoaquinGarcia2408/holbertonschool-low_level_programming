#include "variadic_functions.h"
/**
 * print_numbers - print numeros
 * @separator: separador
 * @n: numeros
 * Return: void
 **/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	int valor;
	va_list p;

	va_start(p, n);
	for (i = 0; i < n; i++)
	{
		valor = va_arg(p, int);
		printf("%d", valor);
		if (i < n - 1 && separator != NULL)
		printf("%s", separator);
	}
		printf("\n");
		va_end(p);
}
