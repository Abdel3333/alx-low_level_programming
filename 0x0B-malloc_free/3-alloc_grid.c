#include <stddef.h>
#include <stdlib.h>
/**
 * **alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width: the width value
 * @height: the height value
 * Return: a pointer to the array
 */
int **alloc_grid(int width, int height)
{
	int i = 0, j = 0, **arr;

	if (width <= 0 || height <= 0)
		return (NULL);
	arr = malloc(sizeof(int) * width * height);
	if (arr == NULL)
		return (NULL);
	for (i = 0; i < width; i++)
	{
		for (j = 0; j < height; j++)
		{
			**arr = 0;
			arr++;
		}
	}
	return (arr);
}
