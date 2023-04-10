/**
 * *_strncat - concatenate two strings
 * @dest: first string
 * @src: second string
 * @n: numbers of bytes
 * Return: A pointer to the resulting string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j, k = 0;

	for (i = 0; *(dest + i); i++)
		;
	for (j = i; k < n && *(src + k) != '\0'; j++)
	{
		*(dest + j) = *(src + k);
		k++;
	}
	*(dest + (j + 1)) = '\0';
	return (dest);
}
