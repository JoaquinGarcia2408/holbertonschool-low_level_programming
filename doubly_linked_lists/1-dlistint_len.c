#include "lists.h"
/**
 * dlistint_len - returns the number of elements in a linked list
 * @h: poiner to the head of the list
 * Return: number of elements of a list
 **/
size_t dlistint_len(const dlistint_t *h)
{
	int cont = 0;

	while (h != NULL)
	{
		cont++;
		h = h->next
	}
	return (cont);
}
