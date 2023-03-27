#include "main.h"
/**
 * _puts - prints a string followed by a new line to stdut
 * @s: pointer to the string
 * Return: Nothing
 */
void _puts(char *s)
{
	int i = 0;

	while (*(s + i) != '\0')
	{
		_putchar(*(s + i));
		i++;
	}
	_putchar('\n');
}
