#include "main.h"
/**
 * print_most_numbers - check the code.
 * Return: Always 0.
 */
void print_most_numbers(void)
{
	char *num = "01356789";
	int letra;

	for (letra = 0; letra <= 9; letra++)
		putchar(num[letra]);
	putchar('\n');
}
