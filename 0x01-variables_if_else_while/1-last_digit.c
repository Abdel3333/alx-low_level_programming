#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - This is a program to prints the last digit of number
 * Return: 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("Last digit of %d is ", n);
	if (n > 5)
		printf("%d and is greater than 5\n", n % 10);
	else if (n < 6 && n != 0)
		printf("%d and is less than 6 and not 0\n", n % 10);
	else if (n == 0)
		printf("%d and is zero\n", n % 10);
	return (0);
}
