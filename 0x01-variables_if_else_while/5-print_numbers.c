#include <stdio.h>
/**
 * main - a program to print base 10 numbers
 * Return: 0
 */
int main(void)
{
	int a = 0, z = 10;

	while (a < z)
	{
		printf("%d", a);
		a++;
	}
	putchar(10);
	return (0);
}
