#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>
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
	printf("arr%p  wid %i,  heig %i\n",(void *) arr, width, height);
	if (arr == NULL)
		return (NULL);
	for (i = 0; i < width; i++)
	{
		for (j = 0; j < height; j++)
		{
			**arr = 0;
			printf("poi%p / arr%i\n",(void *) *arr, **arr);
			if (i  == (width - 1) && j == (height - 1) )
				printf("final");
			else
				arr++;
			printf("i %i, j %i  point%p\n", i, j, (void *) *arr);
		}
	}
	return (arr);
}
