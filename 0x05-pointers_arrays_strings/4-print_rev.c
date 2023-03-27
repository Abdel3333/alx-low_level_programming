#include "main.h"
/**
 * print_rev - prints the reverse of a string followed by a new line to stdut
 * @s: pointer to the string
 * Return: Nothing
 */
void print_rev(char *s)
{
	int i = 0;

	while (*(s + i) != '\0')
	{
		i++;
	}
	while (i >= 0)
	{
		_putchar(*(s + i));
		i--;
	}
	_putchar('\n');
}
