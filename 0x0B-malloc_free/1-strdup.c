#include <stddef.h>
#include <stdlib.h>
/**
 * *_strdup - creates a copy of a string
 * @str: the string pointer
 * Return: a pointer to the string
 */
char *_strdup(char *str)
{
	int i = 0;
	char *arr;

	if (str == NULL)
		return (NULL);
	while (str[i])
		i++;
	arr = malloc(sizeof(char) * i + 1);
	if (arr == NULL)
		return (NULL);
	arr[i] = '\0';
	while (i > 0)
	{
		arr[i - 1] = str[i - 1];
		i--;
	}
	return (arr);
}
