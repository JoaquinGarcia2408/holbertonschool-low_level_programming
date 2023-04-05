#include "lists.h"
/**
 * add_node_end - agrega un nuevo nodo al final de la lista
 * @head: comienzo de la lista
 * @str: string
 * Return: the address of the new element, or NULL if it failed
 **/
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *nuevo;
	list_t *temp = *head;
	int i = 0;

	nuevo = malloc(sizeof(list_t));

	if (nuevo == NULL)
		return (NULL);

	while (str[i] != '\0')
		i++;

	nuevo->len = i;
	nuevo->str = strdup(str);
	nuevo->next = NULL;

	if (*head == NULL)
	{
		*head = nuevo;
	}
	else
	{
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = nuevo;
	}
	return (nuevo);
}
