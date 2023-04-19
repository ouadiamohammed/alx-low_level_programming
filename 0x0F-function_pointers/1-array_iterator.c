#include "function_pointers.h"

/**
 * array_iterator - maps an array through a function pointer.
 *
 * @array: pointer to an int array.
 * @size: size of the array.
 * @action: function pointer.
 *
 * Return: nothing(void).
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;/*to keep the same data type as size*/

	if (array && action && size)
	{
		while (i < size)
		{
			action(*(array + i));/*the same as action(arra[i])*/
			i++;
		}
	}
}
