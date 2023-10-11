#include "function_pointers.h"

/**
 * print_name - This function  prints a name.
 * @name: This is the input name.
 * @f: This is function to a pointer.
 *
 * Return: no return.
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
