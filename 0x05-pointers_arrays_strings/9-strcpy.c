#include <stdio.h>
/**
 * *_strcpy - copy a string
 * @dest: the pointer to dest
 * @str: the pointer to the string
 * Return: the dest pointer
 */
char *_strcpy(char *dest, char *str)
{
	int i;

	for (i = 0; *(str + i); i++)
		*(dest + i) = *(str + i);
	*(dest + i + 1) = '\0';

	return (dest);
}
