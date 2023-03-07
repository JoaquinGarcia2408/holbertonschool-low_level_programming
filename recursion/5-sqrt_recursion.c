/**
 * _sqrt2 - funcion 2
 * @n: number
 * @x: guia
 * Return: always 0
 **/
int _sqrt2(int n, int x)
{
	if (x * x > n)
	{
		return (-1);
	}
	else if (x * x == n)
	{
		return (x);
	}
	else
	{
		return (_sqrt2(n, x + 1));
	}
}

/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: number
 * Return: always 0
 **/
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (_sqrt2(n, 0));
}
