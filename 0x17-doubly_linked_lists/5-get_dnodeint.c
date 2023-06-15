#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list.
 * @head: pointer to pointer to the head of the list.
 * @index: node'index.
 * Return: node at position (index)
*/

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;

	i = 0;
	while (i < index)
	{
		if (head == NULL)
			return (NULL);
		i++;
		head = head->next;
	}
	return (head);
}
