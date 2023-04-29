#include "lists.h"

/**
 * listint_len - returns the number of elements/nodes in a
 *               linked listint_t list.
 * @h: input list.
 * Return: counter(the number of nodes).
 */

size_t listint_len(const listint_t *h)
{
	size_t counter = 0;

	while (h != NULL)
	{
		h = h->next;
		counter++;
	}
	return (counter);
}
