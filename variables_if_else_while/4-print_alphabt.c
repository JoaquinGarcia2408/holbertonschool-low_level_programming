#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 *  * main - Entry point
 *   * Return: Always 0 (Success)
 *    **/
int main(void)
{
	char *abc = "abcdfghijklmnoprstuvwxyz";
	int letra;

	for (letra = 0; letra <= 23; letra++)
		putchar(abc[letra]);
	putchar('\n');
	return (0);
}
