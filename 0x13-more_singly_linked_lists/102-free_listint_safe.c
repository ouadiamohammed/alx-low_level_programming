#include "lists.h"

/**
 * free_listint_safe - frees listint_t list.
 * @h: pointer to pointer to the first node in the listint_t list.
 * Return: node's number.
 */

size_t free_listint_safe(listint_t **h)
{
	size_t counter = 0;
	listint_t *temp = *h;

	if (h == NULL)
		exit(98);
	while (*h != NULL)
	{
		temp = (*h)->next;
		free(*h);
		*h = temp;
		counter++;
	}
	*h = NULL;
	return (counter);
}
