#include "lists.h"

/**
 * my_constructor - allows us to call the printf function befor
 *                  the programm execute the main function.
 * Return: Nothing (void).
 */
void __attribute__((constructor)) my_constructor()
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
