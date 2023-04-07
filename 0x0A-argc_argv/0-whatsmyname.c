#include <stdio.h>
/**
 * main - prints the program name
 * @argc: integer
 * @argv: array of pointers
 * Return: Always 0
 */
int main(int __attribute__((__unused__)) argc, char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
