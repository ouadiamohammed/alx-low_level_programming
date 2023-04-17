#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - frees dog.
 *
 * @d: pointer to struct dog_t.
 *
 * Return: void.
 */

void free_dog(dog_t *d)
{
	if (d == NULL)
		return (NULL);
	free(d->name);
	free(d->owner);
	free(d);
}
