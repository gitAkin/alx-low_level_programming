#include "main.h"

/**
 * set_string - This function Sets the value of a pointer to a char.
 * @s: source adress.
 * @to: target adress.
 * Return: no return.
 */
void set_string(char **s, char *to)
{
	*s = to;
}
