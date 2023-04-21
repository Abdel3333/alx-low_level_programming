#include <stdarg.h>
#include <stdio.h>
#include <stddef.h>
/**
 * print_all - prints anything
 * @format: format
 * Return: nothing
 */
void print_all(const char *const format, ...)
{
	va_list args;
	int i = 0;
	char *s;

	va_start(args, format);
	while (format[i])
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(args, int));
				break;
			case 's':
				s = va_arg(args, char*);
				if (s != NULL)
				{
					printf("%s", s);
					break;
				}
				printf("(nil)");
				break;
			case 'i':
				printf("%i", va_arg(args, int));
				break;
			case 'f':
				printf("%f", va_arg(args, double));
				break;
			default:
				break;
		}
		if (format[i + 1] && (format[i] == 'c' || format[i] == 'i'
		|| format[i] == 'f' || format[i] == 's'))
			printf(", ");
		i++;
	}
	va_end(args);
	printf("\n");
}
