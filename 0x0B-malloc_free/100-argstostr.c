#include <stddef.h>
#include <stdlib.h>
/**
 * *argstostr - concatenates all the arguments of your program
 * @ac: the integer
 * @av: the pointer
 * Return: a pointer to the string
 */
char *argstostr(int ac, char **av)
{
	int i = 0, j = 0;
	char *arr;

	if (ac == 0 || av == NULL)
		return (NULL);
	arr = malloc(sizeof(av) + ac * sizeof(char));
	if (arr == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		while (av[i][j])
		{
			*arr = av[i][j];
			j++;
			arr++;
		}
		*arr = '\n';
		if (i + 1 != ac)
			arr++;
		j = 0;
	}
	arr[i] = '\0';
	return (arr);
}
