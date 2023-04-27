#ifndef LISTS_H
#define LISTS_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * struct list_s - singly linked list
 * @str: the mallo'ed string.
 * @len: stringlength.
 * @next: pointer to the next node.
 */

struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
};
typedef struct list_s list_t;

size_t print_list(const list_t *h);


#endif
