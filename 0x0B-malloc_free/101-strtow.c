#include <stddef.h>
#include <stdlib.h>
/**
 * **strtow - split a string into words
 * @str: the pointer to the string
 * Return: a pointer to array of pointer
 */
char **strtow(char *str)
{
	int i = 0, j = 0, len = 0, wc = 0;
	char **arr;

	while (str[len])
		len++;
	if (len == 0 || str == NULL)
		return (NULL);
	for (i = 0; i < len; i++)
	{
		if (str[i] != 32)
		{
			wc++;
			do
			{
				i++;
			}
			while (str[i] != 32);
		}
	}
	arr = malloc(sizeof(*arr) * wc);
	if (arr == NULL)
		return (NULL);
	for (i = 0; i < wc; i++)
	{
		arr[i]  = malloc(sizeof(*arr[i]) * 10);
		for (; j < len; j++)
		{
			if (str[j] != 32)
			{
				do
				{
					*arr[i] = str[j];
					arr[i]++;
					j++;
				}
				while (str[j] != 32);
				*arr[i] = '\0';
			}
			break;
		}
	}
	return (arr);
}
