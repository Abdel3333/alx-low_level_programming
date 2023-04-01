#include "main.h"
/**
 * print_times_table - prints the n times table starting with 0
 * @n: numbers of times
 * Return: Nothing.
 */
void print_times_table(int n)
{
	int i, j, first, last, time;

	if (n >= 0 || n <= 15)
	{
	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			time = i * j;
			first =  time / 10;
			last =  time % 10;
			if (time == 0)
			{
				if (j != 0)
					_putchar(32);
				_putchar('0' + time);
			}
			else
			{
				if (first == 0)
					_putchar(32);
				else
					_putchar('0' + first);
				_putchar('0' + last);
			}
			if (j != n - 1)
			{
				_putchar(44);
				_putchar(32);
			}
		}
		_putchar('\n');
	}
}
