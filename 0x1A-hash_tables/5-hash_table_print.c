#include "hash_tables.h"

/**
 * hash_table_print - prints hash table.
 * @ht: hash table
 *
 * Return: void.
 */

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *node = NULL;
	unsigned long int i = 0;
	unsigned long int it = 0;

	if (!ht)
	{
		printf("{");
		for (it = 0; it < ht->size; it++)
		{
			node = ht->array[it];
			while (node != NULL)
			{
				if (i != 0)
					printf(", ");
				i = 1;
				printf("'%s': '%s'", node->key, node->value);
				node = node->next;
			}
		}
		printf("}\n");
	}
}
