#include <stdio.h>
/**
 * print_to_98 - prints all numbers from n to 98 with a newline at the end
 * @n: the number from which we will print
 * Return: Nothing
 */
void print_to_98(int n)
{
	int i, final = 98;

	if (n < final)
	{
		for (i = n; i <= final; i++)
		{
			printf("%d", i);
			if (i != final)
				printf(", ");
		}
		printf("\n");
	}
	else
	{
		for (i = n; i >= final; i--)
		{
			printf("%d", i);
			if (i != final)
				printf(", ");
		}
		printf("\n");
	}
}
