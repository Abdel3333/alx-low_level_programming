#include <stdio.h>
/**
 * main - a program to print alphabet letters
 * Return: 0
 */
int main(void)
{
	int a = 97, z = 97 + 26, _a = 65, _z = 65 + 26;

	while (a < z)
	{
		putchar(a);
		a++;
	}
	while (_a < _z)
	{
		putchar(_a);
		_a++;
	}
	putchar(10);
	return (0);
}
