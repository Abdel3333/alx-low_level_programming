#include <stdio.h>
#include "lists.h"

/**
 * list_len - prints number of the elements in a list_t list.
 * @h: pointer to first node of the list
 * Return: number of nodes in the list
 */
size_t list_len(const list_t *h)
{
	size_t nbn = 0;

	while (h)
	{
		h = h->next;
		nbn++;
	}
	return (nbn);
}
