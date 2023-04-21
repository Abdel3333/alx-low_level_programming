#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include <string.h>
/**
 * main - prints  the opcodes of its own main function
 * @argc: an integer for numbers of arguments
 * @argv: a pointer array
 * Return: an integer
 */
int main(int argc, char **argv)
{
	int opc = atoi(argv[1]);

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	if (opc < 0)
	{
		printf("Error\n");
		exit(2);
	}
	printf("%x\n", opc);
	return (0);
}
