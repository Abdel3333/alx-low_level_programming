#include "main.h"
/**
 * rev_string - prints the reverse of a string followed by a new line to stdut
 * @s: pointer to the string
 * Return: Nothing
 */
void rev_string(char *s)
{
	int i = 0, j = 0;
	char *str;
	str = s;

	while (*(s + i) != '\0')
	{
		i++;
	}

	while (i >= 0)
	{
		*(str + j) = *(s + i);
		i--;
		j++;
	}

	while (j >= 0)
	{
		*(s + i) = *(str + i);
		i++;
	}
}
