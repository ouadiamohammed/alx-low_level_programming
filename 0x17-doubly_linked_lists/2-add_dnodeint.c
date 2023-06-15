#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning of the list.
 * @head: pointer to a pointer to the head of doubly linked list.
 * @n: element to add.
 * Return: new node
*/

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *temp;

	if (head == NULL)
		return (NULL);

	temp = malloc(sizeof(dlistint_t));

	if (temp == NULL)
		return (NULL);

	temp->n = n;
	temp->prev = NULL;
	temp->next = *head;

	*head = temp;
	if (temp->next != NULL)
	{
		temp->next->prev = temp;
	}
	return (temp);
}
