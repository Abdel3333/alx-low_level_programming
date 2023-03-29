#include <stdio.h>
/**
 * *_strncpy - copy a string
 * @dest: the pointer to dest
 * @str: the pointer to the string
 * @n: the number of bytes
 * Return: the dest pointer
 */
char *_strncpy(char *dest, char *str, int n)
{
	int i;

	for (i = 0; i < n && *(str + i) != '\0'; i++)
		*(dest + i) = *(str + i);
	for (; i < n; i++)
		*(dest + i) = '\0';

	return (dest);
}
