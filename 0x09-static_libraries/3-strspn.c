#include "main.h"
/**
 * _strspn - gets the length of a prefix substring
 * @s: pointer s
 * @accept: a pointer
 * Return: an unsigned integer
 */
unsigned int _strspn(char *s, char *accept)
{
	int j, k;
	unsigned int nb = 0;

	for (j = 0; (s[j] >= 'a' && s[j] <= 'z')
	|| (s[j] >= 'A' && s[j] <= 'Z'); j++)
	{
		for (k = 0; accept[k]; k++)
		{
			if (s[j] == accept[k])
				nb++;
		}
	}
	return (nb);
}
