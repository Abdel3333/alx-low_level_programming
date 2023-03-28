#include "main.h"
/**
 * puts2 - prints every other character of a string started with the first one
 * @str: the string
 * Return: Nothing
 */
void puts2(char *str)
{
	int i = 0, strlen = 0;

	while (*(str + strlen) != '\0')
	{
		strlen++;
	}
	while (*(str + i) != '\0')
	{
		_putchar(*(str + i));
		i += 2;
	}
	if (strlen % 2 == 0)
		_putchar('\0');
	
	_putchar('\n');
}
