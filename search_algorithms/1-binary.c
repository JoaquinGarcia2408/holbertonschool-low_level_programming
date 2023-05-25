#include "search_algos.h"
/**
 * print_array - prints an array
 * @array: pointer to the first element of the array to search in
 * @left: the furthest position to the left
 * @right: the furthest position to the right
 */
void print_array(int *array, int left, int right)
{
	int i = 0;

	printf("Searching in array: ");
	for (i = left; i < right; i++)
	{
		printf("%d, ", array[i]);
	}
	printf("%d\n", array[i]);
}
/**
 * binary_search - searches for a value in a sorted array of integers
 * using the Binary search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 * Return: index where value is located or -1 if it isn't found
 */
int binary_search(int *array, size_t size, int value)
{
	size_t left = 0, right = size - 1, middle = 0;

	if (array == NULL || size == 0)
		return (-1);

	while (right >= left)
	{
		print_array(array, left, right);
		middle = left + (right - left) / 2;

		if (array[middle] == value)
			return (middle);

		if (array[middle] > value)
			right = middle - 1;
		else
			left = middle + 1;
	}
	return (-1);
}
