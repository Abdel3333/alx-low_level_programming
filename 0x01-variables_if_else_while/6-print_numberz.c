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
		a++;
	}
	putchar(10);
	return (0);
}
