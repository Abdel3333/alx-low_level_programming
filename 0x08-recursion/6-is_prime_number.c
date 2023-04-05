#include "main.h"
/**
 * is_prime - returns 1 if the input integer
 * is a prime number, otherwise return 0
 * @n: a number
 * @f: a number
 * Return: an Integer
 */
int is_prime(int n, int f)
{
	if (n <= 1)
		return (0);
	if (n == f)
		return (1);
	if (n % f == 0)
		return (0);
	return (is_prime(n, ++f));
}

/**
 * is_prime_number - returns 1 if the input integer
 * is a prime number, otherwise return 0
 * @n: a number
 * Return: an Integer
 */
int is_prime_number(int n)
{
	return (is_prime(n, 2));
}
