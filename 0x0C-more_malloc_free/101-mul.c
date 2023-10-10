#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

/**
 * _is_zero - This function determines if any number is zero
 * @argv: argument vector.
 *
 * Return: no return.
 */
void _is_zero(char *argv[])
{
	int i, kin = 1, kis = 1;

	for (i = 0; argv[1][i]; i++)
		if (argv[1][i] != '0')
		{
			kin = 0;
			break;
		}

	for (i = 0; argv[2][i]; i++)
		if (argv[2][i] != '0')
		{
			kis = 0;
			break;
		}

	if (kin == 1 || kis == 1)
	{
		printf("0\n");
		exit(0);
	}
}

/**
 * _initialize_array - This function sets memery to zero in a new array
 * @ar: This is a char array.
 * @lar: This is the length of the char array.
 *
 * Return: pointer of a char array.
 */
char *_initialize_array(char *ar, int lar)
{
	int a = 0;

	for (a = 0; a < lar; a++)
		ar[a] = '0';
	ar[lar] = '\0';
	return (ar);
}

/**
 * _checknum - This is a function that determines length of the number
 * and checks if number is in base 10.
 * @argv: An arguments vector.
 * @n: a row of the array.
 *
 * Return: length of the number.
 */
int _checknum(char *argv[], int n)
{
	int b;

	for (b = 0; argv[n][b]; b++)
		if (!isdigit(argv[n][b]))
		{
			printf("Error\n");
			exit(98);
		}

	return (b);
}

/**
 * main - This is the entry point.
 * This program multiplies two positive numbers.
 * @argc: The number of arguments.
 * @argv: arguments vector.
 *
 * Return: 0 - success.
 */
int main(int argc, char *argv[])
{
	int ln1, ln2, anout, add, addl, i, j, k, ca;
	char *aki;

	if (argc != 3)
		printf("Error\n"), exit(98);
	ln1 = _checknum(argv, 1), ln2 = _checknum(argv, 2);
	_is_zero(argv), anout = ln1 + ln2, aki = malloc(anout + 1);
	if (aki == NULL)
		printf("Error\n"), exit(98);
	aki = _initialize_array(aki, anout);
	k = anout - 1, i = ln1 - 1, j = ln2 - 1, ca = addl = 0;
	for (; k >= 0; k--, i--)
	{
		if (i < 0)
		{
			if (addl > 0)
			{
				add = (aki[k] - '0') + addl;
				if (add > 9)
					aki[k - 1] = (add / 10) + '0';
				aki[k] = (add % 10) + '0';
			}
			i = ln1 - 1, j--, addl = 0, ca++, k = anout - (1 + ca);
		}
		if (j < 0)
		{
			if (aki[0] != '0')
				break;
			anout--;
			free(aki), aki = malloc(anout + 1), aki = _initialize_array(aki, anout);
			k = anout - 1, i = ln1 - 1, j = ln2 - 1, ca = addl = 0;
		}
		if (j >= 0)
		{
			add = ((argv[1][i] - '0') * (argv[2][j] - '0')) + (aki[k] - '0') + addl;
			addl = add / 10, aki[k] = (add % 10) + '0';
		}
	}
	printf("%s\n", aki);
	return (0);
}
