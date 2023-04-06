#include "lists.h"
/**
 * print_dlistint - prints all the elements of a list
 * @h: poiner to the head of the list
 * Return: number of nodes
 **/
size_t print_dlistint(const dlistint_t *h)
{
	int cont = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		cont++;
		h = h->next;
	}
	return (cont);
}
