#include <stdio.h>
/**
 * main - a program to print a combination of two digits
 * Return: 0
 */
int main(void)
{
	int a = 48, z = 48 + 10;

	for (int i = a; i < z; i++)
	{
		for (int j = a; j < z; j++)
		{
			for (int k = a; k < z; k++)
			{
				putchar(i);
				putchar(j);
				putchar(k);
				if (j != 57 && i != 57 && k != 57)
				{
					putchar(44);
					putchar(32);
				}
			}
		}
	}
	putchar(10);
	return (0);
}
