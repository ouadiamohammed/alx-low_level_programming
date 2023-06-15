#include "lists.h"

/**
 * add_dnodeint_end - adds node at the ende of a dlistint_t list.
 * @head: pointer to pointer to the head of a list.
 * @n: element to add
 * Return: new node
*/

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *temp, *a;

	if (head == NULL)
		return (NULL);
	temp = malloc(sizeof(dlistint_t));
	if (temp == NULL)
		return (NULL);

	temp->n = n;
	temp->prev = NULL;
	temp->next = NULL;
	if (*head != NULL)
	{
		a = *head;
		while (a->next != NULL)
			a = a->next;
		a->next = temp;
		temp->prev = a;
	}
	else
		*head = temp;
	return (temp);
}
