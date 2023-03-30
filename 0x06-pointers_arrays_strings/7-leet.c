/**
 * *leet - encodes a string
 * @s: a string pointer
 * Return: the pointer
 */
char *leet(char *s)
{
	int i, j;
	char alp[6] = "aeotl", cod[6] = "43071";

	for (i = 0; alp[i] != '\0'; i++)
	{
		for (j = 0; s[j] != '\0'; j++)
		{
			if (s[j] == alp[i] || s[j] == (alp[i] - 32))
				*(s + j) = cod[i];
		}
	}
	return (s);
}
