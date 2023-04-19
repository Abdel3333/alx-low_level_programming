#include <stddef.h>
/**
 * array_iterator - executes a function given as a parameter
 * on each element of an array
 * @array: the array
 * @size: the array size
 * @action: pointer to funtion
 * Return: Nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i = 0;

	for (i = 0; i < (int)size; i++)
	{
		action(array[i]);
	}
}
