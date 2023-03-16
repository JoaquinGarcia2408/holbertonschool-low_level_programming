#include "main.h"
/**
 * _memset - function that fills memory with a constant byte
 * @s: area pointed;
 * @b: constant byte;
 * @n: the number of bytes;
 * Return: s;
 **/
void *_memset(void *s, char b, unsigned int n)
{
	unsigned int i;
	unsigned char *ptr = s;

	for (i = 0; i < n; i++)
		ptr[i] = (unsigned char)b;
	return (ptr);
}
/**
 * _calloc - prototype
 * @nmemb: numero
 * @size: tamaño
 * Return: always 0
 **/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *p;

	if (nmemb == 0 || size == 0)
		return (NULL);
	p = malloc(size * nmemb);
	if (p == NULL)
		return (NULL);
	_memset(p, 0, (nmemb * size));
	return (p);
}
