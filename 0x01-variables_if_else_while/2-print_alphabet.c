#include <stdio.h>
/**
 * main - a program to print alphabet letters
 * Return: 0
 */
int main(void)
{
	int a = 97, z = 97 + 26;

	while (a < z)
	{
		putchar(a);
		a++;
	}
	putchar(10);
	return (0);
}
