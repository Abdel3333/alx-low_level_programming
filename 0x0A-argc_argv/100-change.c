#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * findnumberofcoin - finds number of coin
 * @s: the number of change address
 * @c: the cents address
 * @coin: the coin number
 * Return: Nothing
 */
void findnumberofcoin(int *s, int *c, int coin)
{
	if (*c >= coin)
	{
		*s += *c / coin;
		*c %= coin;
	}
}
/**
 * isnumber - check for a number
 * @c: a pointer to the number string
 * Return: 0 if false, 1 if true
 */
int isnumber(char *c)
{
	int i;

	for (i = 0; c[i]; i++)
	{
		if (isdigit(c[i]) == 0)
			return (0);
	}
	return (1);
}
/**
 * main - prints the number of coins to make change
 * @argc: integer
 * @argv: array of pointers
 * Return: an integer
 */
int main(int argc, char *argv[])
{
	int sum = 0, cents;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	cents = atoi(argv[1]);
	if (isnumber(argv[1]) == 0 || cents <= 0)
	{
		printf("0\n");
		return (0);
	}
	findnumberofcoin(&sum, &cents, 25);
	findnumberofcoin(&sum, &cents, 10);
	findnumberofcoin(&sum, &cents, 5);
	findnumberofcoin(&sum, &cents, 2);
	findnumberofcoin(&sum, &cents, 1);
	printf("%d\n", sum);
	return (0);
}
