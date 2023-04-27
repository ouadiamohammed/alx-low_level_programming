#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list.
 * @h: linked list.
 * Return: number of elements.
 */

size_t list_len(const list_t *h)
{
	size_t counter = 0;

	while (h)
	{
		h = h->next;
		counter++;
	}
	return (counter);
}

/**
 * add_node - adds a new node at the beginning of the linked list.
 * @head: linked list.
 * @str: string where the data will be copied to the new node.
 * Return: address of the new node or NULL if failed.
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *node_to_insert;

	if (str == NULL)
		return (NULL);
	if (strdup(str) == NULL)
		return (NULL);
	node_to_insert = malloc(sizeof(list_t));
	if (node_to_insert == NULL)
		return (NULL);

	node_to_insert->str = strdup(str);
	node_to_insert->len = _strlen(str);

	if (head == NULL)
		node_to_insert->next = NULL;
	else
		node_to_insert->next = *head;

	*head = node_to_insert;
	return (node_to_insert);
}















