#include "main.h"
/**
 * set_string - sets the value of a pointer to a char
 * @s: pointer s
 * @to: a character
 * Return: Nothing
 */
void set_string(char **s, char *to)
{
	int i;

	for (i = 0; to[i]; i++)
		**(s + i) = to[i];
}
