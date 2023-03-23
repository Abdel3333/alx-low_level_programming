#include "main.h"
/**
 * print_triangle - print a triangle
 * @n: number represented the size of the triangle
 * Return: Nothing
 */
void print_triangle(int n)
{
	int i, j, k;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (i = 0; i < n; i++)
		{
			if (n > 1)
			{
				for (j = 0; j < (n - i - 1); j++)
				{
					_putchar(32);
				}
			}
			for (k = 0; k <= i; k++)
			{
				_putchar(35);
			}
			_putchar('\n');
		}
	}
}
