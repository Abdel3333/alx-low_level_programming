#include "main.h"
/**
 * print_rev - prints the reverse of a string followed by a new line to stdut
 * @s: pointer to the string
 * Return: Nothing
 */
void print_rev(char *s)
{
	int i = 0, j;

	while (*(s + i) != '\0')
	{
		i++;
	}
	for (j = i; j >= 0; j--)
	{
		_putchar(*(s + j));
	}
	_putchar('\n');
}
