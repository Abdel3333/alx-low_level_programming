#include "main.h"
/**
 * palindrome_helper - tells if a string is a palindrome
 * @s: a pointer to string
 * Return: an integer
 */
int palindrome_helper(char *s, int nindex, int rindex)
{
	if (nindex < 0 || rindex < 0)
		return (0);
	else if (nindex >= rindex)
		return (1);
	else if (s[nindex] == s[rindex])
		return (palindrome_helper(s, ++nindex, --rindex));
	else
		return (0);
}


/**
 * _strlen - get the string length
 * @s: a pointer to string
 * Return: an integer
 */
int _strlen(char *s)
{
	if (!*s)
		return 0;
	return 1 + _strlen(s + 1);
}


/**
 * wildcmp - compares two strings
 * @s1: a pointer to string
 * @s2: a pointer to reference string
 * Return: an integer 0 or 1
 */
int wildcmp(char *s1, char *s2)
{
	int slength = _strlen(s);

	if (slength == 0)
		return (1);
	else
		return palindrome_helper(s, 0, slength - 1);

}
