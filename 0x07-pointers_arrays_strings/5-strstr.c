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
	int j = 0, k, start, nlen;

	for (nlen = 0; needle[nlen]; nlen++)
		;
	if (nlen == 0)
		return (haystack);
	for (j = 0; haystack[j]; j++)
	{
		if (needle[0] == haystack[j])
		{
			start = j;
			j++;
			for (k = 1; needle[k] && haystack[j]; k++)
			{
				if (needle[k] != haystack[j++])
					break;
				else if (k == nlen)
					return (&haystack[start]);
			}
		}
		j = start;
	}
	return (NULL);
}
