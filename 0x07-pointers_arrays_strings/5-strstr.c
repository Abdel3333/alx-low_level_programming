#include "main.h"
#include <stddef.h>
/**
 * *_strstr - locates a substring
 * @haystack: pointer s
 * @needle: a pointer
 * Return: a pointer
 */
char *_strstr(char *haystack, char *needle)
{
	int j, k, start;

	for (j = 0; haystack[j]; j++)
	{
		if (needle[0] == haystack[j])
		{
			start = j;
			for (k = 1; needle[k]; k++)
			{
				if (needle[k] != haystack[++j])
					return (NULL);
			}
			return (&haystack[start]);
		}
	}
	return (NULL);
}
