#include <stdio.h>
/**
 * positive_or_negative - This is a program to prints randomly a number type
 * Return: 0
 */
int positive_or_negative(int n)
{
	printf("%d", n);
	if (n > 0)
		printf(" is positive\n");
	else if (n < 0)
		printf(" is negative\n");
	else
		printf(" is zero\n");
	return (0);
}
