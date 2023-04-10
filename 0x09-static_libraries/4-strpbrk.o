#include "main.h"
#include <stddef.h>
/**
 * *_strpbrk - searches a string for any of a set of bytes
 * @s: pointer s
 * @accept: a pointer
 * Return: a pointer
 */
char *_strpbrk(char *s, char *accept)
{
	int j, k;

	for (j = 0; s[j]; j++)
	{
		for (k = 0; accept[k]; k++)
		{
			if (s[j] == accept[k])
				return (&s[j]);
		}
	}
	return (NULL);
}
