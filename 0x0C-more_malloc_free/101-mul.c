#include "main.h"
#include <stdlib.h>
/**
 * _strlen - find the length of a string
 * @str: the string pointer
 * Return: an integer
 */
unsigned long _strlen(char *str)
{
	unsigned long len = 0;

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
	unsigned long len, i = 0;

	len = _strlen(str);
	for (i = 0; i < len; i++)
		_putchar(str[i]);
}

/**
 * printn - print a number
 * @n: the number
 * Return: Nothing
 */
void printn(unsigned long n)
{
	unsigned long div, rem;

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
unsigned long isnumber(char *s)
{
	unsigned long len, i;

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
	unsigned long mul;

	if (argc != 3 || isnumber(argv[1]) == 0 || isnumber(argv[2]) == 0)
	{
		prints("Error\n");
		exit(98);
	}
	mul = atol(argv[1]) * atol(argv[2]);
	printn(mul);
	prints("\n");
	return (0);
}
