#include "main.h"
/**
* swap_int - swaps values
* @a: parameter
* @b: parameter
*
* Return: void
*/

void swap_int(int *a, int *b)
{
	int value;

	value = *a;
	*a = *b;
	*b = value;
}
