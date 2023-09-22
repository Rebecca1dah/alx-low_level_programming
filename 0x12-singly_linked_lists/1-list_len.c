#include <stdlib.h>
#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list
 * @h: pointer to the list_t list
 *
 * Return: number of elements in h
 */
size_t list_len(const list_t *r)
{
	size_t b = 0;

	while (r)
	{
		b++;
		r = r->next;
	}
	return (b);
}
