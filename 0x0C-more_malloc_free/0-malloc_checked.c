#include <stdlib.h>
#include <stddef.h>
/**
 * *malloc_checked - allocates memory using malloc
 * @b: the size
 * Return: Nothing
 */
void *malloc_checked(unsigned int b)
{
	void *all;

	all = malloc(b);
	if (all == NULL)
		exit(98);
	return (all);
}
