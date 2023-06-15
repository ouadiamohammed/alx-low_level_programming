#include "lists.h"

/**
 * print_dlistint - prints all the elements of the list
 * @h: head list
 * Return: Nodes Number
 */

size_t print_dlistint(const dlistint_t *h)
{
	int i;

	i = 0;
	if (h == NULL)
		return (0);
	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (i);
}
