#include <stdarg.h>
#include <stdio.h>
#include <stddef.h>
/**
 * print_strings - prints all parameters
 * @separator: caracter separator
 * @n: first arg
 * Return: nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	int i = 0;

	va_start(args, n);
	while (i < (int) n)
	{
		printf("%s", (va_arg(args, char*) != NULL ? va_arg(args, char*) : "(nil)"));
		if (i + 1 < (int) n && separator != NULL)
			printf("%s", separator);
		i++;
	}
	va_end(args);
	printf("\n");
}
