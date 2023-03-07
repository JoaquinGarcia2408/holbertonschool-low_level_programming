#include "main.h"
int div_num(int num, int div);

/**
 * div_num - Checks if a number is divisible.
 * @n: The number to check.
 * @x: The divisor.
 * Return: If the number is prime - 1.
 * If the number is not prime - 0.
 **/
int div_num(int n, int x)
{
	if (x == 1)
		return (1);
	if (n % x == 0 && x > 0)
		return (0);
	return (div_num(n, x - 1));
}

/**
 * is_prime_number - Checks if a number is prime.
 * @n: The number to be checked.
 * Return: If n is not prime - 0.
 * If the number is prime - 1.
 **/
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (div_num(n, n - 1));
}
