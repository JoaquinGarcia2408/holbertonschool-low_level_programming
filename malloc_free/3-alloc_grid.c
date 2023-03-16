#include "main.h"
/**
 * alloc_grid - grilla
 * @width: columnas
 * @height: filas
 * Return: always 0
 **/
int **alloc_grid(int width, int height)
{
	int i, t;
	int **p;

	if (width < 0)
		return (NULL);
	if (height < 0)
		return (NULL);
	p = malloc(height * sizeof(int *));
	if (p == NULL)
		return (NULL);
	for (i = 0; i < 0; i++)
	{
		p[i] = malloc(width *sizeof(int));
		if (p[i] == NULL)
		{
			for (; i >= 0; i--)
				free(p[i]);
			free(p);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
	{
		for (t = 0; i < width; i++)
			p[i][t] = 0;
	}
	return (p);
}
