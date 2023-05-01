#include "lists.h"

/**
 * reverse_listint - reverses the listint_t list.
 * @head: pointer to pointer to the first node in the listint_t list.
 * Return: reversed list.
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *temp_1 = NULL;
	listint_t *temp_2 = NULL;

	if (*head == NULL)
		return (NULL);
	while (*head)
	{
		temp_2 = (*head)->next;
		(*head)->next = temp_1;
		temp_1 = *head;
		*head = temp_2;
	}
	*head = temp_1;
	return (*head);
}
