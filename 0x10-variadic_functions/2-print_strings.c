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
	char *s;

	va_start(args, n);
	if (n <= 0)
	{
		return;
	}
	while (i < (int) n)
	{
		s = va_arg(args, char*);
		printf("%s", s != NULL ? s : "(nil)");
		if (i + 1 < (int) n && separator != NULL)
			printf("%s", separator);
		i++;
	}
	va_end(args);
	printf("\n");
}
