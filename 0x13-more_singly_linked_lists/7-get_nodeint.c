#include "lists.h"

/**
 * get_nodeint_at_index - findes the n_th node we are looking for.
 * @head: pointer to the first node in listint_t list.
 * @index: node's index.
 * Return: NULL if it doesn't exist.
 *         or node when exist.
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);
	while (i < index)
	{
		if (head->next == NULL)
			return (NULL);
		head = head->next;
		i++;
	}
	return (head);
}
