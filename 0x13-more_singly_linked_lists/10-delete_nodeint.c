#include "lists.h"

/**
 * delete_nodeint_at_index - deletes a node at a giving
 *                           index in the listint_t list.
 * @head: pointer to pointer to the first node in the listint_t list.
 * @index: node's index.
 * Return: 1 for success, -1 if it failed.
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *temp_1, *temp_2;

	if (*head == NULL)
		return (-1);
	temp_1 = *head;
	if (index == 0)
	{
		*head = temp_1->next;
		free(temp_1);
		return (1);
	}
	while (i < index - 1)
	{
		if (temp_1 == NULL || temp_1->next == NULL)
			return (-1);
		temp_1 = temp_1->next;
	}
	temp_2 = temp_1->next;
	temp_1->next = temp_2->next;
	free(temp_2);
	return (1);
}
