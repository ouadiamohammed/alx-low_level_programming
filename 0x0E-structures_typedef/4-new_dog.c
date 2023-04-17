#include <stdlib.h>
#include "doh.h"

/**
 * _strcpy - makes a copy from source string and save it in destination string.
 *
 * @dest: destination string.
 * @src: source string.
 *
 * Return: destionation string.
 */

char	*_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/**
 * _strlen - gets the length of a giving string.
 *
 * @str: pointer to giving string.
 *
 * Return: length of string.
 */

int	_strlen(char *str)
{
	int i = 0;

	while (str[i] != '\0')
		i++;
	return (i);
}

/**
 * new_dog - creates a new dog.
 *
 * @name: name of dog.
 * @age: dog'S age.
 * @owner: dog's owner.
 *
 * Return: NULL if the function fails.
 *         struct pointer dog.
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	if (!name || age < 0 || !owner)
		return (NULL);

	dog = (dog_t *) malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	dog->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}

	dog->owne = malloc(sizeof(char) * (_strlen(owner) + 1));
	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}

	dog->name = _strcpy(dog->name, name);
	dog->age = age;
	dog->owner = _strcpy(dog->owner, owner);

	return (dog);
}
















