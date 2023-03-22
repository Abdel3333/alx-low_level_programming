#include <stdio.h>
/**
 * main - print sum of multiple of 3 and 5
 * Return: Always 0
 */
int main(void)
{
	int i, sum = 0;

	for (i = 0; i < 1024; i++)
	{
		if (i % 15 == 0)
		{
			sum += i;
		}
	}
	printf("%d\n", sum);
	return (0);
}
