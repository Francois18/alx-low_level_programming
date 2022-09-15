#include "main.h"
/**
* print_line - prints n times lines
* @n: numbers of times
*
* Return: always zero
*/

void print_line(int n)
{
	int initialValue;

	initialValue = 0;
	while (initialValue < n)
	{
		_putchar('_');
		initialValue++;
	}
	_putchar('\n');
}
