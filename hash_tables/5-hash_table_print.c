#include "hash_tables.h"
/**
 * hash_table_print - prints a hash table
 * @ht: is the hash table
 * Return: void
 **/
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int index;
	hash_node_t *elem;
	int flag = 1;

	if (ht == NULL)
		return;
	printf("{");
	for (index = 0; index < ht->size; index++)
	{
		for (elem = ht->array[index]; elem != NULL; elem = elem->next)
		{
			if (flag)
			{
				printf("'%s': '%s'", elem->key, elem->value);
				flag = 0;
			}
			else
				printf(", '%s': '%s'", elem->key, elem->value);
		}
	}
	printf("}\n");
}
