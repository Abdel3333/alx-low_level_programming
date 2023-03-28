#include "main.h"
/**
 * puts_half - prints half of a string
 * @str: the string
 * Return: Nothing
 */
void puts_half(char *str)
{
	int strlen = 0, n, i;

	while (*(str + strlen) != '\0')
	{
		strlen++;
	}
	strlen++;
	if (strlen % 2 != 0)
		n = (strlen - 1) / 2;
	else
		n = strlen / 2;
	for (i = n; i < strlen - 1; i++)
		_putchar(*(str + i));
	_putchar('\n');
}
