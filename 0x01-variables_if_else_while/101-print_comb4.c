#include <stdio.h>
/**
 * main - a program to print a combination of three digits
 * Return: 0
 */
int main(void)
{
	int a = 48, z = 48 + 10, _a = 48, __a = 48;

	while (a < z)
	{
		while (_a < z)
		{
			if (a < _a)
			{
				while (__a < z)
				{
					if (_a < __a)
					{
						putchar(a);
						putchar(_a);
						putchar(__a);
					}
					if (_a < __a && (a + 1 == z - 2) && (_a + 1 == z - 1) && (__a + 1 == z))
						break;
					if (_a < __a)
					{
						putchar(44);
						putchar(32);
					}
					__a++;
				}
				__a = 48;
			}
			_a++;
		}
		_a = 48;
		a++;
	}
	putchar(10);
	return (0);
}
