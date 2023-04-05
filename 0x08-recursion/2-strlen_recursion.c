#include "main.h"
/**
 * _strlen_recursion - return aa length of a string
 * @s: a pointer to the string
 * Return: an Integer
 */
int _strlen_recursion(char *s)
{
	if (!(*s))
		return (0);
	return (1 + _strlen_recursion(s + 1));
}
