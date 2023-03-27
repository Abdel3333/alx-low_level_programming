#include "main.h"
/**
 * _strlen - return a length of a string
 * @s: pointer to the string
 * Return: an integer
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	return (i);
}
