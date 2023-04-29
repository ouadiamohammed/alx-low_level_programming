#include "lists.h"

/**
 * add_nodeint - adds new node at the beginning of a listint_t list.
 * @head: input list.
 * @n: input number.
 * Return: the adresse of new node or NULL if malloc failed.
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = (listint_t *) malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = *head;
	*head = new;
	return (new);
}
