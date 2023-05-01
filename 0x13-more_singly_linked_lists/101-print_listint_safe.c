#include "lists.h"

/**
 * print_listint_safe - prints the listint_t list.
 * @head: pointer to the first node in the listint_t list.
 * Return: node's number.
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t counter = 0;
	long int temp;

	if (head == NULL)
		exit(98);

	while (head)
	{
		temp = head - head->next;
		printf("[%p] %d\n", (void *)head, head->n);
		if (temp <= 0)
		{
			printf("-> [%p] %d\n", (void *)head->next, head->next->n);
			break;
		}
		else
			head = head->next;
		counter++;
	}
	return (counter);
}
