#include <stdio.h>
/**
 * print_array - prints elements of array
 * @a: the array
 * @n: the size of the array
 * Return: Nothing
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i + 1 == n)
			printf("%i", *(a + i));
		else 
			printf("%i, ", *(a + i));
	}
	printf("\n");
}
