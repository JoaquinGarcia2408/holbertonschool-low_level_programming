#include "lists.h"
/**
 * add_node - agrega nodo al principio de la lista
 * @head: primer nodo
 * @str: string
 * Return: always 0
 **/
list_t *add_node(list_t **head, const char *str)
{
	list_t *nuevo;
	int i = 0;

	nuevo = malloc(sizeof(list_t));

	if (nuevo == NULL)
		return (NULL);
	while (str[i] != '\0')
		i++;
	nuevo->len = i;
	nuevo->str = strdup(str);
	nuevo->next = *head;
	*head = nuevo;
	return (nuevo);
}
