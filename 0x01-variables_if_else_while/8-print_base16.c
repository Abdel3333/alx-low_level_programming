#include <stdio.h>
/**
 * main - a program to print base 10 numbers
 * Return: 0
 */
int main(void)
{
	int a = 48, z = 48 + 10, _a = 97, _z = 103;

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
