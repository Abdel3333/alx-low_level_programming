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
	arr = malloc(sizeof(*arr) * height);
	if (arr == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		arr[i] = malloc(sizeof(*arr[i]) * width);
		if (arr[i] == NULL)
			return (NULL);
		for (j = 0; j < width; j++)
		{
			arr[i][j] = 0;
		}
	}
	return (arr);
}
