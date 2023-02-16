#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0 (Success)
 **/
int main(void)
{
	int n;
	int resto;
	 srand(time(0));
	n = rand() - RAND_MAX / 2;
	resto = n % 10;
	if (resto > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, resto);
	}
	else if (resto == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, resto);
	}
	else
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, resto);
	}
	return (0);
}
