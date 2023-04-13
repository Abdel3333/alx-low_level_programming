#include <stddef.h>
#include <stdlib.h>
/**
 * *string_nconcat - concatenates two strings
 * @s1: the string pointer
 * @s2: the string pointer
 * @n: the number of bytes to copy
 * Return: a pointer to the string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int l1 = 0, l2 = 0, i = 0, j = 0;
	char *arr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[l1])
		l1++;
	while (s2[l2])
		l2++;
	if ((int) n < l2)
		l2 = (int) n;
	arr = malloc(sizeof(char) * (l1 + l2) + 1);
	if (arr == NULL)
		return (NULL);
	while (i < l1)
	{
		arr[i] = s1[i];
		i++;
	}
	while (i < (l1 + l2))
	{
		arr[i] = s2[j];
		i++;
		j++;
	}
	arr[i] = '\0';
	return (arr);
}
