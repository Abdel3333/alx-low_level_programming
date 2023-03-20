#include <stdio.h>
/**
 * main - a program to print a combination of two digits
 * Return: 0
 */
int main(void)
{
	int a = 48, z = 48 + 10, _a = 48;

	while (a < z)
	{
		while (_a < z)
		{
			if (a < _a)
			{
				putchar(a);
				putchar(_a);
				if (a + 1 == z - 1)
				{
					if (_a + 1 == z)
						break;
				}
				putchar(44);
				putchar(32);
			}
			_a++;
		}
		_a = 48;
		a++;
	}
	putchar(10);
	return (0);
}
