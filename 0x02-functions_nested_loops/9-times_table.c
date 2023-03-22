#include "main.h"
/**
 * times_table - prints the 9 times table starting with 0
 *
 * Return: Nothing.
 */
void times_table(void)
{
	int i, j, first, last, time;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
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
			if (j != 9)
			{
				_putchar(44);
				_putchar(32);
			}
		}
		_putchar('\n');
	}
}
