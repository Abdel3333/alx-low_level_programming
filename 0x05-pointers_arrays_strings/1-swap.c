#include "main.h"
/**
 * swap_int - swap the value of two numbers
 * @a: the pointer of the first number
 * @b: the pointer of the second number
 * Return: Nothing
 */
void swap_int(int *a, int *b)
{
	int c, d;

	c = *a;
	d = *b;
	*b = c;
	*a = d;
}
