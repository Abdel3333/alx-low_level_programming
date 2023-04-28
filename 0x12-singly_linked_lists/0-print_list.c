#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list.
 * @h: pointer to first node of the list
 * Return: number of nodes in the list
 */
size_t print_list(const list_t *h)
{
	size_t nbn = 0;
	int tlen;
	char *tstr;

	while (h)
	{
		if (h->str == NULL)
		{
			tstr = "(nil)";
			tlen = 0;
		}
		else
		{
			tstr = h->str;
			tlen = h->len;
		}
		printf("[%d] %s\n", tlen, tstr);
		h = h->next;
		nbn++;
	}
	return (nbn);
}
