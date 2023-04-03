#include "main.h"
#include <stddef.h>
/**
 * *_strchr - locates a character in a string
 * @s: pointer s
 * @c: a character
 * Return: a pointer
 */
char *_strchr(char *s, char c)
{
	int i, len;

	for (l = 0; s[l]; l++)
		;
	for (i = 0; i <= l + 1; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}
	return (NULL);
}
