#include "main.h"
/**
 * print_line - draw a line in a terminal
 * @n: number represented the size of line to draw
 * Return: Nothing
 */
void print_line(int n)
{
	int i;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (i = 0; i < n; i++)
		{
			_putchar(95);
		}
		_putchar('\n');
	}
}
