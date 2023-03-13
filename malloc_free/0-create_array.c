#include "main.h"
/**
 * create_array - variable
 * @size: tamaño
 * @c: caracter
 * Return: always 0.
 **/
char *create_array(unsigned int size, char c)
{
	char *p;
	unsigned int i;

	p = malloc(sizeof(char) * size);

	if (p == NULL)
	{
		exit(0);
	}
	else if (size != 0)
	{
		for (i = 0; i < size; i++)
			p[i] = c;
	}
	else
	{
		return (NULL);
	}
	return (p);
}
