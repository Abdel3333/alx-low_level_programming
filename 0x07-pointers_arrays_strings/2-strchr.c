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
	int i;

	for (i = 0; s[i]; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}
	return (NULL);
}
