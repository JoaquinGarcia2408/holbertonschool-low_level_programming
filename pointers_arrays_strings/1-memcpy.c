#include "main.h"
/**
 * _memcpy - function that copies memory area;
 * @dest: memory area;
 * @src: memory area;
 * @n: bytes;
 * Return: pointer to dest;
 **/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;
	char *cad = dest;

	for (i = 0; i < n; i++)
	{
		*dest = *src;
		dest++;
		src++;
	}
	return (cad);
}
