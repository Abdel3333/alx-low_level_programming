/**
 * reverse_array - reverses the content of an array of integers
 * @a: the array pointer
 * @n: the numbers of elements in the array
 * Return: nothing
 */
void reverse_array(int *a, int n)
{
	int *first = a, *last = &*(a + (n - 1)), temp;

	while (first < last)
	{
		temp = *first;
		*first = *last;
		*last = temp;
		first++;
		last--;
	}
}
