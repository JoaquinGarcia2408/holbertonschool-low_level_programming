#include "main.h"
/**
 * malloc_checked - prototype
 * @b: cantidad de memoria requerida
 * Return: always 0
 **/
void *malloc_checked(unsigned int b)
{
	int *p;

	p = malloc(b);
	if (p == NULL)
		exit(98);
	else
		return (p);
}
