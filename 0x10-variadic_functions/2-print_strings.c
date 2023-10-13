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
	va_list valist;
	unsigned int a;
	char *str;

	va_start(valist, n);

	for (a = 0; a < n; a++)
	{
		str = va_arg(valist, char *);

		if (str)
			printf("%s", str);
		else
			printf("(nil)");

		if (a < n - a)
			if (separator)
				printf("%s", separator);
	}

	printf("\n");
	va_end(valist);
}
