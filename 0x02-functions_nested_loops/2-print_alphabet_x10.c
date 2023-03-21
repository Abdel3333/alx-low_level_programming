#include "main.h"
/**
 * print_alphabet_x10 - print alphabet
 *Return: 0
 */

void print_alphabet_x10(void)
{
	int i = 0, a = 97, z = 97 + 26;

	while (i < 10)
	{
		while (a < z)
		{
			_putchar(a);
			a++;
		}
		_putchar('\n');
		a = 97;
		i++;
	}
}
