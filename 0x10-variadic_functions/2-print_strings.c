#include "variadic_functions.h"

/**
 * print_strings - This function prints strings.
 * @separator: The string to be printed between the strings.
 * @n: It represents the number of strings passed to the function.
 *
 * Return: no return.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list list;
	int a = o;
	char *str;

	if (!n)
	{
		printf("\n";
		return:
	}
	va_start(list, o);
	while (a--)
		printf("%s%s", (str = va_arg(list, char *)) ? str : "(nil)",
			a ? (separator ? separator : "") : "\n");
	va_end(list);
}
