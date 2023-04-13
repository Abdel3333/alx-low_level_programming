#include <stdlib.h>
#include <stddef.h>
/**
 * *_calloc - allocates memory for an array using malloc
 * @nmemb: the number of members
 * @size: the size
 * Return: Nothing
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *all;
	unsigned int i = 0;

	if (nmemb == 0 || size == 0)
		return (NULL);
	all = malloc(size * nmemb);
	if (all == NULL)
		return (NULL);
	while (i < nmemb)
	{
		((char *)all)[i] = '\0';
		i++;
	}
	return (all);
}
