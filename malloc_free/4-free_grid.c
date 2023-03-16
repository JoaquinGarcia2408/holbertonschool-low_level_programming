#include "main.h"
/**
 * free_grid - funcion
 * @grid: grilla
 * @height: variable
 * Return: always 0
 **/
void free_grid(int **grid, int height)
{
	int f;

	for (f = 0; f < height; f++)
	{
		free(grid[f]);
	}
	free(grid);
}
