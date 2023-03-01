#include "main.h"
/**
 * _strncat - concatenates two strings
 * @dest: string one
 * @src: string two
 * @n: most bytes
 * return: always 0.
 **/
char *_strncat(char *dest, char *src, int n)
{
	int i, s;

	i = 0;
	while (dest[i])
		i++;
	for (s = 0; src[s]; s++)
		if (i < n)
			dest[i++] = src[s];
	return (dest);
}
