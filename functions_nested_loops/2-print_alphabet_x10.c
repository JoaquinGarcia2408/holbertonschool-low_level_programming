#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"
/**
 * print_alphabet - Imprime alfabeto x dies
 * Return: Always 0
 **/
void print_alphabet_x10(void)
{
	char *abc = "abcdefghijklmnopqrstuvwxyz";
	int letra;
	int sum;

	for (sum = 0; sum <= 9; sum++)
	{
		for (letra = 0; letra <= 25; letra++)
		{
			_putchar(abc[letra]);
		}
	_putchar('\n');
	}
}
