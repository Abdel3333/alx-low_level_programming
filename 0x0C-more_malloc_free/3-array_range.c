#include <stdlib.h>
#include <stddef.h>
/**
 * *array_range - creates an array of integers
 * @min: the number represented the minimum
 * @max: the number represented the maximum
 * Return: a pointer
 */
int *array_range(int min, int max)
{
	int *all, i = 0, size, inc = min;

	if(min > max)
		return (NULL);
	size = max - min + 1;
	all = malloc(size * sizeof *all);
	if (all == NULL)
		return (NULL);
	while (i < size)
	{
		all[i] = inc++;
		i++;
	}
	return (all);
}
