#include <stdio.h>
/**
 * main - a program to print alphabet letters except e and q
 * Return: 0
 */
int main(void)
{
	int a = 97, z = 97 + 26;

	while (a < z)
	{
		if (a == 101 || a == 113)
			a++;
		else
		{
			putchar(a);
			a++;
		}
	}
	putchar(10);
	return (0);
}
