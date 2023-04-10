#include <ctype.h>
/**
 * _isdigit - check if a character is a digit
 * @c: The character to check
 * Return: 0 or 1
 */
int _isdigit(int c)
{
	if (isdigit(c) != 0)
		return (1);
	else
		return (0);
}
