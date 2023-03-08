#include "main.h"
/**
 * _strcpy - Copies a string.
 * @dest: A buffer to copy the string to.
 * @src: The source string to copy.
 * Return: A pointer to the destination string @dest.
 **/
char *_strcpy(char *dest, char *src)
{
	int cont = 0, lect;

	while (src[cont] != '\0')
	{
		cont++;
	}
	for (lect = 0; lect <= cont; lect++)
	{
		dest[lect] = src[lect];
	}
	dest[lect] = '\0';
	return (dest);
}
