#include "lists.h"

/**
 * pop_listint - deletes the head node of listint_t list.
 * @head: pointer to pointer to the first node in our list.
 * Return: 0 if the linked list is empty.
 *         Data save in the head node of the linked list.
 */

int pop_listint(listint_t **head)
{
	int data;
	listint_t *free_node;

	if (*head != NULL)
		return (0);

	free_node = *head;
	data = free_node->n;
	*head = (*head)->next;

	free(free_node);
	return(data);
}
