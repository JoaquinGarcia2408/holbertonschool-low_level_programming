#include "hash_tables.h"
/**
 * hash_table_set - add en element to the hash table
 * @ht: given hash table
 * @key: key of the node
 * @value: value of the key node
 * Return: 1 if succesful or 0 if not
 **/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *current;
	hash_node_t *new_node;

	if (ht == NULL || key == NULL || *key == '\0')
		return (0);
	index = hash_djb2((const unsigned char *)key) % ht->size;
	current = ht->array[index];

	if (current == NULL)
	{
		new_node = malloc(sizeof(hash_node_t));
		if (new_node == NULL)
			return (0);
		new_node->key = strdup(key);
		new_node->value = strdup(value);
		new_node->next = NULL;
		ht->array[index] = new_node;
	}
	else
	{
		while (current != NULL)
		{
			if (strcmp(current->key, key) == 0)
			{
				free(current->value);
				current->value = strdup(value);
				return (1);
			}
			current = current->next;
		}
		new_node = malloc(sizeof(hash_node_t));
		if (new_node == NULL)
			return (0);
		new_node->key = strdup(key);
		new_node->value = strdup(value);
		new_node->next = ht->array[index];
		ht->array[index] = new_node;
	}
	return (1);
}
