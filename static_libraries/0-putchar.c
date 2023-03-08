#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"

/**
 *  * main - Entry point
 *   * Return: Always 0 (Success)
 *    **/
int main(void)
{
	char *put = "_putchar";
	int lector;

	for (lector = 0; lector <= 7; lector++)
		putchar(put[lector]);
	putchar('\n');
	return (0);
}
