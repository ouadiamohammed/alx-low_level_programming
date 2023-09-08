#include "hash_tables.h"

/**
 * hash_table_delete - deletes and frees a hash table.
 * @ht: pointer to the hash table.
 *
 * Return: void
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i = 0;
	hash_node_t *node1 = NULL, *node2 = NULL;

	if (!ht)
		return;
	for (i = 0; i < ht->size; i++)
	{
		node1 = ht->array[i];
		while (node1 != NULL)
		{
			node2 = node1->next;
			free(node1->key);
			free(node1->value);
			free(node1;
			node1 = node2;
		}
	}
	free(ht->array);
	free(ht);
}
