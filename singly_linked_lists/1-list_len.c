#include "lists.h"
/**
 * list_len - return number of elements
 * @h: pointer
 * Return: number of elements
 **/
size_t list_len(const list_t *h)
{
	size_t cont = 0;

	while (h != NULL)
	{
		cont++;
		h = h->next;
	}
	return (cont);
}
