#include "function_pointers.h"
#include <stdlib.h>

/**
 * array_iterator - function
 * @array: integer array parameter
 * @size: size of the array parameter
 * @action: function pointer
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array != NULL && action != NULL)
		for (i = 0; i < size; i++)
		action(array[i]);
}
