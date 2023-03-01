#include "main.h"
/**
 * _strncat - concatenates two strings
 * @dest: string one
 * @src: string two
 * @n: most bytes
 * Return: dest
 **/
char *_strncat(char *dest, char *src, int n)
{
	int i, s;

	i = 0;
	while (dest[i])
	{
		i++;
	}
	s = 0;
	while (src[s])
	{
		if (i < n)
		{
			i++;
			dest[i++] = src[s];
		}
	}
	return (dest);
}
