#include "main.h"
/**
 * _puts_recursion - prints a string followed by a new line
 * @s: a pointer to the string
 * Return: Nothing
 */
void _puts_recursion(char *s)
{
	if (!*s)
		_putchar('\n');
	else
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
}
