#include <stdio.h>

/**
 * main - prints reversed alphabets in lowercase.
 *
 * Return: Alway 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 122; i > 96; i--)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
