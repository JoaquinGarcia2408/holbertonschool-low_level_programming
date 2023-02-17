#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main - Entry point
* Return: Always 0 (Success)
**/
int main(void)
{
	char *b16 = "0123456789abcdef";
	int lector;
	
	for (lector = 0; lector <= 15; lector++)
		putchar(b16[lector]);
	putchar('\n');
	return (0);
}
