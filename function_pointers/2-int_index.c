#ifndef INT_INDEX
#define INT_INDEX
#include "function_pointers.h"
/**
 * int_index - funcion
 * @array: array
 * @size: tamaño
 * @cmp: algo
 * Return: always 0
 **/
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);
	if (array != NULL && cmp != NULL)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
			{
				return (i);
			}
			else
			{
				return (-1);
			}
		}
	}
	return (0);
}
#endif
