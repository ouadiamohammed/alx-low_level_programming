#include "lists.h"

/**
 * inser_dnodeint_at_index - insert a new node at a given position.
 * @h: pointer to pointer to the head of the list.
 * @idx: new node's index.
 * @n: element n in the new node.
 * Return: new node.
*/

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temp1, *temp2;
	unsigned int i = 0;

	if (h == NULL)
		return (NULL);
	temp1 = malloc(sizeof(dlistint_t));
	if (temp1 == NULL)
		return (NULL);
	temp1->n = n;

	if (idx == 0)
		return(add_dnodeint(h, n));
	else
	{
		temp2 = *h;
		while (temp2 != NULL && i < (idx -1))
		{
			temp2= temp2->next;
			i++;
		}
		if (temp2 == NULL)
		{
			free(temp1);
			return (NULL);
		}
		temp1->next = temp2->next;
		temp1->prev = temp2;
		if (temp2->next != NULL)
			temp2->next->prev = temp1;
		temp2->next = temp1;
	}
	return (temp1);  
}
