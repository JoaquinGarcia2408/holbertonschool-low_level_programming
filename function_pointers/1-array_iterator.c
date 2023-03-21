#ifndef ARRAY_ITERATOR
#define ARRAY_ITERATOR
#include "function_pointers.h"
/**
 * array_iterator - funcion
 * @size: tamaño
 * @action: pointer
 * Return: void
 **/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL)
		return;
	if (action == NULL)
		return;
	for (i = 0; i < size; i++)
		(*action)(array[i]);
}
#endif
