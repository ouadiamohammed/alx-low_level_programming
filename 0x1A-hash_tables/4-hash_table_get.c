#include "hash_tables.h"

/**
 * hash_table_get - gets the value associated with
 *                  the key in the hash table.
 * @ht: hash table.
 * @key: key
 *
 * Return: NULL if key not found, if it successeds return the value
 *         associated with the key.
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *node;
	unsigned long int idx;

	if (!key || !ht)
		return (NULL);

	idx = key_index((const unsigned char *)key, ht->size);
	node = ht->array[idx];

	while (node && strcmp(node->key, key) != 0)
		node = node->next;

	if (!node)
		return (NULL);
	else
		return (node->value);
}
