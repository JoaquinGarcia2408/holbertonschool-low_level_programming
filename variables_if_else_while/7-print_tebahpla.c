#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0 (Success)
 **/
int main(void)
{
	char *cba = "abcdefghijklmnopqrstuvwxyz";
	int lector;

	for (lector = 25; lector >= 0; lector--)
		putchar(cba[lector]);
	putchar('\n');
	return (0);
}
