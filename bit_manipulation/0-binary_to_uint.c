#include "main.h"
/**
 * binary_to_uint - function that converts a binary number to an unsigned int.
 * @b: pointer to a string of 0 and 1 chars.
 * b is NULL.
 * Return: the converted number or 0 if there is one or more chars in the,
 * string b that is not 0 or 1.
 **/
unsigned int binary_to_uint(const char *b)
{
	int i, usigned_int = 0, dec_val = 1;

	if (!b)
		return (0);
	for (i = _strlen(b) - 1; i >= 0; i--)
	{
		if (b[i] != '0' && b[i] != '1')
		{
		return (0);
		}
		if (b[i] == '1')
		{
			usigned_int += dec_val;
		}
		dec_val *= 2;
	}
	return (usigned_int);
}
