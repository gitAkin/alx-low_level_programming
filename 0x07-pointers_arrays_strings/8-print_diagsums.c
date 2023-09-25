#include "main.h"
#include <stdio.h>
/**
 * print_diagsums -This function  prints the sum of the two
 * diagonals of a square matrix of integers
 * @a: input pointer.
 * @size: size of the matrix
 * Return: no return.
 */
void print_diagsums(int *a, int size)
{
	int k, add = 0, sum = 0;

	for (k = 0; k < (size * size); k++)
	{
		if (k % (size + 1) == 0)
			add += *(a + k);
		if (k % (size - 1) == 0 && k != 0 && k < size * size - 1)
			sum += *(a + k);
	}
	printf("%d, %d\n", add, sum);
}
