#include <stdio.h>
#include <stdlib.h>

/**
 * main - This function check the code for Holberton School students.
 * @argc: argument count.
 * @argv: argument vector.
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	char *opc = (char *) main;
	int a, bytes;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	bytes = atoi(argv[1]);

	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (a = 0; a < bytes; a++)
	{
		printf("%02x", opc[a] & 0xFF);
		if (a != bytes - 1)
			printf(" ");
	}

	printf("\n");
	return (0);
}
