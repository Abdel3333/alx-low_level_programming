#include <stdio.h>
#include <stddef.h>
#include "3-calc.h"
#include <stdlib.h>
#include <string.h>
/**
 * main - prints the result of the operation, followed by a new line
 * @argc: an integer for numbers of arguments
 * @argv: a pointer array
 * Return: an integer
 */
int main(int argc, char **argv)
{
	int cal;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (strlen(argv[2]) != 1 || (argv[2][0] != '+' && argv[2][0] != '-' &&
	argv[2][0] != '*' && argv[2][0] != '/' && argv[2][0] != '%'))
	{
		printf("Error\n");
		exit(99);
	}
	if (atoi(argv[3]) == 0 && (argv[2][0] == '/' || argv[2][0] == '%'))
	{
		printf("Error\n");
		exit(100);
	}
	cal = get_op_func(argv[2])(atoi(argv[1]), atoi(argv[3]));
	printf("%d\n", cal);
	return (0);
}
