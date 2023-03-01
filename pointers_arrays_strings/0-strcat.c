#include "main.h"
/**
 * _strcat - concatenates two strings.
 * @dest: string one
 * @src: string two
 * Return: always 0.
 **/
char *_strcat(char *dest, char *src)
{
	int i, s;

	i = 0;
	while (dest[i])
		i++;
	for (s = 0; src[s]; s++)
		dest[i++] = src[s];
	return (dest);
}
