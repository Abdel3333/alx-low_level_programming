#include <stdio.h>
/**
 * print_diagsums - prints the sum of the two diagonals of a square matrix
 * @a : pointer
 * @size: size of the matrix
 * Return: Nothing
 */
void print_diagsums(int *a, int size)
{
	int i = 0, j, sum1 = 0, sum2 = 0;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (i == j)
				sum1 += *(a + (size + 1) * i);
			if (j == (size - 1) - i)
				sum2 += *(a + (size - 1) * (i + 1));
		}
	}
	printf("%d, %d\n", sum1, sum2);
}
