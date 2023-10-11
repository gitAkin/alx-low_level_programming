#include "function_pointers.h"

/**
 * array_iterator - This function executes a function given as a
 * parameter on each element of an array.
 * @array: It is an input integer array.
 * @size: Represents the size of the array.
 * @action: This is used as a pointer to the function.
 *
 * Return: no return.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int a;

	if (array && action)
		for (a = 0; a < size; a++)
			action(array[a]);
}
