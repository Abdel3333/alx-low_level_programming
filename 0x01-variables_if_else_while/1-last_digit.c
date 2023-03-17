#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - This is a program to prints the last digit of number
 * Return: 0
 */
int main(void)
{
	int n, d;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	d = n % 10;
	printf("Last digit of %d is ", n);
	if (d > 5)
		printf("%d and is greater than 5\n", d);
	else if (d < 6 && d != 0)
		printf("%d and is less than 6 and not 0\n", d);
	else if (d == 0)
		printf("%d and is zero\n", d);
	return (0);
}
