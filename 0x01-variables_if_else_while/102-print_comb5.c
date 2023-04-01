#include <stdio.h>
/**
 * main - prints all possible combinations of two two-digit numbers
 * Return: an integer
 */
int main(void)
{
	int i = 0, j = 0;

	while (i < 100)
	{
		while (j < 100)
		{
			if (i >= j)
				j++;
			else
			{
				putchar(i / 10 + '0');
				putchar(i % 10 + '0');
				putchar(32);
				putchar(j / 10 + '0');
				putchar(j % 10 + '0');
				if (!(i == 98 && j == 99))
				{
					putchar(44);
					putchar(32);
				}
				j++;
			}
		}
		j = 0;
		i++;
	}
	putchar('\n');
	return (0);
}
