#include "main.h"
/**
 * array_range - crea una array de enteros
 * @min: valor minimo
 * @max: valor maximo
 * Return: always 0
 **/
int *array_range(int min, int max)
{
	int i, t;
	int *p;

	if (min > max)
		return (NULL);
	t = max - min + 1;
	p = malloc(sizeof(int) * t);
	if (p == NULL)
		return (NULL);
	for (i = 0; min <= max; i++)
		p[i] = min++;
	return (p);
}
