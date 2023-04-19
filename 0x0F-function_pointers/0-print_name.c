/**
 * print_name - prints a name
 * @name: name to prints
 * @f: pointer to funtion
 * Return: Nothing
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
