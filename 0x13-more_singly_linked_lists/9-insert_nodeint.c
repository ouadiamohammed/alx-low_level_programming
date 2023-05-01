#include "lists.h"

/**
 * insert_nodeint_at_index - add a new node at a giving index.
 * @head: pointer to pointer pointing to the first node in listint_t list.
 * @idx: index.
 * @n: the data should be saved in the new node.
 * Return: the adresse of the new node or NULL if it failed.
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;
	listint_t *new_node, *node;

	if (head == NULL)
		return (NULL);
	new_node = malloc(sizeof(listint));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}
	node = *head;
	while (i < idx - 1)
	{
		if (node == NULL)
		{
			free(new_node);
			return (NULL);
		}
		node = node->next;
	}
	new_node->next = node->next;
	node->next = new_node;
	return (new_node);
}
