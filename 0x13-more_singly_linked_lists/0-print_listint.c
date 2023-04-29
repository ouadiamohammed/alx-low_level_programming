#include "lists.h"

/**
 * print_listint - prints all the elements of a listint_t list.
 * @h: input list.
 * @Return: counter(the number of nodes).
 */

size_t print_listint(const listint_t *h)
{
	size_t counter = 0;
	const listint_t *temp = h;

	while (temp != NULL)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
		counter++;
	}
	return (counter);
}
