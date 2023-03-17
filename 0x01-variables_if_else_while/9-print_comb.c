#include <stdio.h>
/**
 * main - a program to print base 10 numbers
 * Return: 0
 */
int main(void)
{
	int a = 48, z = 48 + 10;

	while (a < z)
	{
		putchar(a);
		if (a != 57)
		{
			putchar(44);
			putchar(32);
		}
		a++;
	}
	putchar(10);
	return (0);
}
