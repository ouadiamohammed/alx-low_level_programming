#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table
 * @size: the size of the array
 * Return: pointer to the created hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_ht;
	unsigned long int i = 0;

	if (size == 0)
		return (NULL);

	new_ht = malloc(sizeof(hash_node_t));
	if (!new_ht)
		return (NULL);

	new_ht->size = size;
	new_ht->array = calloc(new_ht->size, sizeof(hash_node_t *));
	if (!new_ht->array)
		return (NULL);
	for (i = 0; i < new_ht->size; i++)
	{
		new_ht->array[i] = NULL;
	}
	return (new_ht);
}
