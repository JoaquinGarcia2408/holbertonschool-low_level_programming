#include "variadic_functions.h"
/**
 * print_strings - imprime cadena
 * @separator: separador
 * @n: cadenas
 * Return: void
 **/
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *valor;
	va_list p;

	va_start(p, n);
	for (i = 0; i < n; i++)
	{
		valor = va_arg(p, char*);
		if (valor == NULL)
		{
			printf("(nil)");
		}
		else
			printf("%s", valor);
		if (i < n - 1 && separator != NULL)
		{
			printf("%s", separator);
		}
	}
		printf("\n");
		va_end(p);
}
