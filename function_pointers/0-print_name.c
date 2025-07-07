/**
 * print_name - prints name using f
 * @name: string
 * @f: printer function
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
