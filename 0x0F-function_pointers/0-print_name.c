#include <stdlib.h>
/**
 * print_name - a function that prints a nameint n = sizeof(arr)/sizeof(arr[0])
 * @name: pointer to name to print
 * @f: function to print name
 * Return: Nothing
 */
void print_name(char *name, void (*f) (char *name));

void print_name(char *name, void (*f) (char *name))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
