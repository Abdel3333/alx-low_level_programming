#include <stdio.h>
/**
 * main - a program to print alphabet letters
 * Return: 0
 */
int main(void)
{
	int a = 97 + 25, z = 97;

	while (a >= z)
	{
		putchar(a);
		a--;
	}
	putchar(10);
	return (0);
}
