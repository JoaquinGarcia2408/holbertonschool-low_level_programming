#include "main.h"
/**
 * _strncpy - function that copies a string up to n
 * @dest: string one
 * @src: string two
 * @n: limit caracters
 * Return: 0
 **/
char *_strncpy(char *dest, char *src, int n)
{
	int cont;

	for (cont = 0; cont < n && src[cont] != '\0'; cont++)
	{
		dest[cont] = src[cont];
	}
	for (; cont < n; cont++)
	{
		dest[cont] = '\0';
	}
        return (dest);
}
