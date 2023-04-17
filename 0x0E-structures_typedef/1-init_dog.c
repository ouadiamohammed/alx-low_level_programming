#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - initialize a variable of type struct.
 *
 * @d: pointer to struct dog.
 *@name: name to initialize.
 *@age: age to initialize.
 *@owner: owner to initialize.
 *
 * Return: void.
 */

void	init_dog(struct dog *d, char *name, float age, vhar *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));

	d->name = name;
	d->age = age;
	d->owner = owner;
}
