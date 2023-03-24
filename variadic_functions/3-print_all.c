#include "variadic_functions.h"
/**
 **/
void print_all(const char * const format, ...)
{
	char c;
	int i, x = 0;
	float f;
	char* s;
	va_list va;

	va_start(va, format);
	while (format[x] != '\0')
	{
		switch(*format)
		{
			case 'c':
				c = va_arg(va, int);
				printf("%c", c);
				break;
			case 'i':
				i = va_arg(va, int);
				printf("%d", i);
				break;
			case 'f':
				f = va_arg(va, double);
				printf("%f", f);
				break;
			case 's':
				s = va_arg(va, char *);
				if (s == NULL)
				{
					printf("(nil)");
				}
				else
				{
					printf("%s", s);
				}
				break;
		}
		++x;
		if (format[i])
		{
			printf(", ");
		}
		printf("\n");
		va_end(va);
	}
}
