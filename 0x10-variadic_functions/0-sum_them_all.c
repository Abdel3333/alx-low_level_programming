#include <stdarg.h>
/**
 * sum_them_all - sum all parameters
 * @n: first arg
 * Return: integer
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	int sum = 0, i = 0;

	if (n == 0)
		return (0);
	va_start(args, n);
	while (i < (int) n)
	{
		sum += va_arg(args, int);
		i++;
	}
	va_end(args);
	return (sum);
}
