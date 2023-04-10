/**
 * *_strcat - concatenate two strings
 * @dest: first string
 * @src: second string
 * Return: A pointer to the resulting string
 */
char *_strcat(char *dest, char *src)
{
	int i, j, k = 0;

	for (i = 0; *(dest + i); i++)
		;
	for (j = i; *(src + k); j++)
	{
		*(dest + j) = *(src + k);
		k++;
	}
	*(dest + (j + 1)) = '\0';
	return (dest);
}
