#include "main.h"
#include <stdlib.h>
/**
 * _strlen - find the length of a string
 * @str: the string pointer
 * Return: an integer
 */
int _strlen(char *str)
{
	unsigned long int len = 0;

	while (str[len])
		len++;
	return (len);
}

/**
 * prints - print a string
 * @str: the string
 * Return: Nothing
 */
void prints(char *str)
{
	unsigned long int len, i = 0;

	len = _strlen(str);
	for (i = 0; i < len; i++)
		_putchar(str[i]);
}

/**
 * printn - print a number
 * @n: the number
 * Return: Nothing
 */
void printn(unsigned long int n)
{
	unsigned long int div, rem;

	div = n / 10;
	rem = n % 10;
	if (div)
		printn(div);
	_putchar(rem + '0');
}

/**
 * isnumber - check if a string is composed of digits
 * @s: the string
 * Return: 0 or 1
 */
int isnumber(char *s)
{
	unsigned long int len, i;

	len = _strlen(s);
	for (i = 0; i < len; i++)
	{
		if (s[i] < 48 || s[i] > 57)
			return (0);
	}
	return (1);
}

/**
 * main - multiply two positive integers
 * @argc: number of arguments
 * @argv: arguments array
 * Return: an integer
 */
int main(int argc, char *argv[])
{
	int mul;

	if (argc != 3 || isnumber(argv[1]) == 0 || isnumber(argv[2]) == 0)
	{
		prints("Error\n");
		exit(98);
	}
	mul = atoi(argv[1]) * atoi(argv[2]);
	printn(mul);
	prints("\n");
	return (0);
}
