#include "lists.h"
/**
 * add_dnodein - adds a new node at the beginning of a dlistint_t list
 * @head: pointer to pointer to head of list.
 * @n: new node
 * Return: nuevo
 **/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *nuevo;

	nuevo = malloc(sizeof(dlistint_t));

	if (nuevo == NULL)
		return (NULL);
	nuevo->n = n;
	nuevo->next = *head;
	nuevo->prev = NULL;
	if ((*head) != NULL)
		(*head)->prev = nuevo;
	(*head) = nuevo;
	return (nuevo);
}
