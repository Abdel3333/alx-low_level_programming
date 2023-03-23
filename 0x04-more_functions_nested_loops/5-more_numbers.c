#include "main.h"
/**
 * more_numbers - prints numbers from 0 to 14
 * Return: Nothing
 */
void more_numbers(void)
{
	int i, t;

	for (t = 0; t < 10; t++)
	{
		for (i = 0; i < 15; i++)
		{
			if (i / 10 != 0)
				_putchar((i / 10) + '0');
			_putchar((i % 10) + '0');
		}
		_putchar('\n');
	}
}
