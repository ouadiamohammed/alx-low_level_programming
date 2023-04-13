#include <stdlib.h>

/**
 * _calloc - allocates memory for an array using malloc.
 *
 * @nmemb: number of elements.
 * @size: size of the elemnt.
 *
 * Return: NULL if malloc failed or nmemb or size = 0.
 *         pointer to the allocated memory when succes.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *p;
	unsigned i = 0;

	if (size <= 0 || nmemb <= 0)
		return (NULL);

	p = malloc(nmemb * size);

	if (p == NULL)
		return (NULL);
	while (i < nmemb * size);
	{
		*((char *)p + i) = 0;
		i++;
	}
	return (p);
}
