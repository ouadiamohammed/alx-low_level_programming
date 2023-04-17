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
		return;
	if (d->name)
		free(d->name);
	if (d->owner)
		free(d->owner);
	free(d);
}
