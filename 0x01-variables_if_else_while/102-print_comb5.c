#include <stdio.h>
/**
 * main - prints all possible combinations of two two-digit numbers
 * Return: an integer
 */
int main(void)
{
	int i = 0, j = 0, k = 0, l = 0;

	while (i < 10)
	{
		while (j < 10)
		{
			while (k < 10)
			{
				while (l < 10)
				{
					putchar(i + '0');
					putchar(j + '0');
					putchar(32);
					putchar(k + '0');
					putchar(l + '0');
					if (!(i == 9 && j == 9 && k == 9 && l == 9))
					{
						putchar(44);
						putchar(32);
					}
					l++;
				}
				l = 0;
				k++;
			}
			k = 0;
			j++;
		}
		j = 0;
		i++;
		l++;
	}
	putchar('\n');
	return (0);
}
