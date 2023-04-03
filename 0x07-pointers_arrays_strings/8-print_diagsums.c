#include <stdio.h>
/**
 * print_diagsums - prints the sum of the two diagonals of a square matrix
 * @a : pointer
 * @size: size of the matrix
 * Return: Nothing
 */
void print_diagsums(int *a, int size)
{
	int i = 0, mem_size, sum1 = 0, sum2 = 0;

	mem_size = 4 * (size * size);
	printf("%i, %i, %d", *a, i, mem_size);
	while (i < mem_size)
	{
		/*for (j = 0; j < size; j++)
		{
			if (i == j)
				sum1 += a[i + j * 4];
			if (j == (size - 1) - i)
				sum2 += a[4 * (i + 1) / 2];
		}*/	
		sum1 += a[mem_size];
		i =+ (size + 1) * 4;
	}
	printf("%d, %d\n", sum1, sum2);
}
