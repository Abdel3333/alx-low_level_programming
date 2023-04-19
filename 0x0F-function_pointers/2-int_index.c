#include <stddef.h>
/**
 * int_index - search for integer
 * @array: the array
 * @size: the array size
 * @cmp: pointer to funtion
 * Return: an integer
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size <= 0)
		return (-1);
	for (i = 0; i < (int)size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}
	return (-1);
}
