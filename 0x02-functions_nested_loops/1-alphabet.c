#include "main.h"
/**
 * print_alphabet - print alphabet
 *Return: 0
 */

void print_alphabet(void)
{
	int a = 97, z = 97 + 26;

	while (a < z)
	{
		_putchar(a);
		a++;
	}
	_putchar('\n');
}
