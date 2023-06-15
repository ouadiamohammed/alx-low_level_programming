#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index index
 * of a dlistint_t linked list.
 * @head: pointer to pointer to the head of the list.
 * @index: node's index.
 * Return: it depends on condition
*/

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i;
	dlistint_t *temp1, *temp2;

	i = 0;
	if (head == NULL || *head == NULL)
		return (-1);
	temp1 = *head;
	if (i == 0)
	{
		*head = temp1->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(temp1);
		return (1);
	}
	while (i < index)
	{
		if (temp1 == NULL)
			return (-1);
		temp2 = temp1;
		temp1 = temp1->next;
		i++;
	}
	temp2->next = temp1->next;
	if (temp1->next != NULL)
		temp1->next->prev = temp2;
	free(temp1);
	return (1);
}
