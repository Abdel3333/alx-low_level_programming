#include <stdlib.h>
#include <stddef.h>
/**
 * *_realloc - allocates memory for an array using malloc
 * @ptr: the old memory pointer
 * @old_size: the old size
 * @new_size: the new size
 * Return: Nothing
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *all;
	unsigned int i = 0;

	if (old_size == new_size)
		return (ptr);
	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		all = malloc(new_size);
		if (all == NULL)
			return (NULL);
		return (all);
	}
	if (new_size > old_size)
	{
		all = malloc(new_size);
		if (all == NULL)
			return (NULL);
		for (i = 0; i < old_size; i++)
			((char *)all)[i] = ((char *)ptr)[i];
		return (all);
	}
	all = malloc(new_size);
	if (all == NULL)
		return (NULL);
	for (i = 0; i < new_size; i++)
		((char *)all)[i] = ((char *)ptr)[i];
	return (all);
}
