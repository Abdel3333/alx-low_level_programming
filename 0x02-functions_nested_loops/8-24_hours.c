#include "main.h"
/**
 * jack_bauer - prints every minute of the day
 * Return: nothing
 */
void jack_bauer(void)
{
	int i, j, k, l, a = 48, z = 58;

	for (i = a; i < a + 3; i++)
	{
		for (j = a; j < z; j++)
		{
			if (i == a + 2 && j >= a + 4)
				break;
			for (k = a; k < a + 6; k++)
			{
				for (l = a; l < z; l++)
				{
					_putchar(i);
					_putchar(j);
					_putchar(58);
					_putchar(k);
					_putchar(l);
					_putchar('\n');
				}
			}
		}
	}
}
