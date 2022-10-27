/**
 * print_name - function that print the name.
 * @name: string name.
 * @f: function pointer.
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
