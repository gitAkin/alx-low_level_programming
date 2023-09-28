#include "main.h"

/**
 * is_prime - This function  detects if an input number is a prime number.
 * @o: input number.
 * @p: iterator.
 * Return: 1 if o is a prime number. 0 if n is not a prime number.
 */
int is_prime(unsigned int o, unsigned int p)
{
	if (o % p == 0)
	{
		if (o == p)
			return (1);
		else
			return (0);
	}
	return (0 + is_prime(o, p + 1));
}
/**
 * is_prime_number - This function  detects if an input number is a prime number.
 * @n: input number.
 * Return: 1 if n is a prime number. 0 if n is not a prime number.
 */
int is_prime_number(int o)
{
	if (o == 0)
		return (0);
	if (o < 0)
		return (0);
	if (o == 1)
		return (0);
	return (is_prime(o, 2));
}
