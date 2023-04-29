#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a listint list.
 * @head: pointer to a pointer to the first node of the list.
 * @n: the int value to be added to the new node.
 * Return: the adress of the new element or NULL if malloc failed.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node, *last_node;

	new_node = (listint_t *) malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}
	last_node = *head;
	while (last_node->next != NULL)
		last_node = last_node->next;

	last_node->next = new_node;
	return (new_node);
}
