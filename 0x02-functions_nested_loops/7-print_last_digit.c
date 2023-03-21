#include "main.h"
/**
 * print_last_digit - print the last digit of a number
 *@n: a number
 *Return: the last digit
 */

int print_last_digit(int n)
{
	int last_digit = n % 10 + 48;

	_putchar(last_digit);
	return (last_digit);
}
