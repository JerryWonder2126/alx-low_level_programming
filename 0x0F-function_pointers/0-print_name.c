/**
 * print_name - calls callback function f and pass name to it
 *
 * @name: name to be printed
 * @f: callback function
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
