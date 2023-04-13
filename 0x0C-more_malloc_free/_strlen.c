#include <stdlib.h>
#include "main.h"

/**
 * _strlen - gives the length of a giving string.
 *
 * @str: pointer to a giving string.
 *
 * Return: string length.
 */

int     _strlen(char *str)
{
        int i = 0;

        while (str[i] != '\0')
                i++;
        return (i);
}
