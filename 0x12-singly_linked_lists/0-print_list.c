#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints all the elements of a linked lists
 * @r: a pointer to the list_t list to print
 *
 * Return: number of nodes printed
 */
size_t print_list(const list_t *r)
{
	size_t a = 0;

	while (r)
	{
		if (!r->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", r->len, r->str);
		r = r->next;
		a++;
	}

	return (a);
}
