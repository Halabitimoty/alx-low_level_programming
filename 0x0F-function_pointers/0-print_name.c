/**
 * print_name - a function that prints a name.
 * @name: Character Pointer
 * @f: function pointer that doesn't return anything
 * author - Alabi Timothy
 */

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
