#include "main.h"
/**
 * sqrtComp - return the square root of a number
 * @n: a number
 * @lpart: a number
 * @rpart: a number
 * Return: an Integer
 */

int sqrtComp(int n, int lpart, int rpart)
{
	int half;

	if (rpart - lpart == 1)
		return (-1);
	if (n == 0 || n == 1)
		return (n);
	half = (lpart + rpart) / 2;
	if (half * half == n)
		return (half);
	else if (half * half > n)
		return (sqrtComp(n, lpart, half));
	else
		return (sqrtComp(n, half, rpart));
}

/**
 * _sqrt_recursion - return the square root of a number
 * @n: a number
 * Return: an Integer
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (sqrtComp(n, 1, n / 2));
}
