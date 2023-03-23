#include <ctype.h>
/**
 * _isupper - check if a character is uppercase
 * @c: The character to check
 * Return: 0 or 1
 */
int _isupper(int c)
{
	if (isupper(c) != 0)
		return (1);
	else
		return (0);
}
