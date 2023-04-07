#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * isnumber - check for a number
 * @n: an integer
 * Return: 0 if false, 1 if true
 */
int isnumber(char *c)
{
	int i;

	for (i = 0; c[i]; i++)
	{
		if (isdigit(c[i]) == 0)
			return (0);
	}
	return (1);
}
/**
 * main - adds positive numbers
 * @argc: integer
 * @argv: array of pointers
 * Return: an integer
 */
int main(int argc, char *argv[])
{
	int sum = 0, i;

	if (argc == 1)
        {
                printf("0\n");
		return (0);
        }
	for (i = 1; i < argc; i++)
	{
		if (isnumber(argv[i]) == 0)
		{
			printf("Error\n");
			return (1);
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
