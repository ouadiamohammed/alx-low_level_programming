#include "lists.h"

/**
 * _strlen - returns the stringlength.
 * @str: giving string.
 * Return: stringlength.
 */

int     _strlen(const char *str)
{
	int i = 0;

	while (str[i] != '\0')
		i++;
	return (i);
}

/**
 * add_node_end - adds new node to the ende of a list_t list.
 * @head: linked list.
 * @str: the string from where the data will be copied.
 * Return: adress of new element, or not if failed.
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *temporary;

	if (str == NULL || strdup(str) == NULL)
		return (NULL);

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);
	new_node->len = _strlen(str);
	new_node->next = NULL;

	if (*head == NULL)
		*head = new_node;
	else
	{
		temporary = *head;
		while (temporary->next != NULL)
			temporary = temporary->next;
		temporary->next = new_node;
	}
	return (new_node);
}
